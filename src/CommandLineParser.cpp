#include <common/Util.h>
#include <CryptoNoteConfig.h>

#include "CommandLineParser.h"

namespace WalletGui {

CommandLineParser::CommandLineParser(QObject* _parent) : QObject(_parent), m_parser(), m_helpOption(m_parser.addHelpOption()),
  m_versionOption(m_parser.addVersionOption()),
  m_testnetOption("testnet", tr("テストネットを展開するために使用されます。 チェックポイントとハードコードされたシードは無視され、ネットワークIDが変更されます。 "
     "-data-dirフラグとともに使用します。ウォレットは-testnetフラグで起動する必要があります")),
  m_p2pBindIpOption("p2p-bind-ip", tr("P2Pネットワークプロトコルのインタフェース"), tr("ip"), "0.0.0.0"),
  m_p2pBindPortOption("p2p-bind-port", tr("P2Pネットワークプロトコル用ポート"), tr("port"), QString::number(P2P_DEFAULT_PORT)),
  m_p2pExternalOption("p2p-external-port", tr("p2pネットワークプロトコルの外部ポート（NATでポート転送を使用している場合）"),
    tr("port"), 0),
  m_allowLocalIpOption("allow-local-ip", tr("主にデバッグ目的で、ローカルIP add to peerリストを許可する")),
  m_addPeerOption("add-peer", tr("手動でローカルピアリストにピアを追加する"), tr("peer")),
  m_addPriorityNodeOption("add-priority-node", tr("接続先のピアのリストを指定して、接続を開いたままにします"),
    tr("node")),
  m_addExclusiveNodeOption("add-exclusive-node", tr("接続先ピアのリストを指定するだけです。 このオプションに "
     "add-priority-nodeとseed-nodeは無視されます"), tr("node")),
  m_seedNodeOption("seed-node", tr("ノードに接続してピアアドレスを取得し、切断する"), tr("node")),
  m_hideMyPortOption("hide-my-port", tr("ピアリスト候補者としてあなた自身を発表しないでください")),
  m_dataDirOption("data-dir", tr("データディレクトリを指定する"), tr("directory"), QString::fromLocal8Bit(Tools::getDefaultDataDirectory().c_str())),
  m_minimized("minimized", tr("最小化モードでアプリケーションを実行する")) {
  m_parser.setApplicationDescription(tr("Catalyst wallet"));
  m_parser.addHelpOption();
  m_parser.addVersionOption();
  m_parser.addOption(m_testnetOption);
  m_parser.addOption(m_p2pBindIpOption);
  m_parser.addOption(m_p2pBindPortOption);
  m_parser.addOption(m_p2pExternalOption);
  m_parser.addOption(m_allowLocalIpOption);
  m_parser.addOption(m_addPeerOption);
  m_parser.addOption(m_addPriorityNodeOption);
  m_parser.addOption(m_addExclusiveNodeOption);
  m_parser.addOption(m_seedNodeOption);
  m_parser.addOption(m_hideMyPortOption);
  m_parser.addOption(m_dataDirOption);
  m_parser.addOption(m_minimized);
}

CommandLineParser::~CommandLineParser() {
}

bool CommandLineParser::process(const QStringList& _argv) {
#ifdef Q_OS_WIN
  return m_parser.parse(_argv);
#else
  m_parser.process(_argv);
  return true;
#endif
}

bool CommandLineParser::hasHelpOption() const {
  return m_parser.isSet(m_helpOption);
}

bool CommandLineParser::hasMinimizedOption() const {
  return m_parser.isSet(m_minimized);
}

bool CommandLineParser::hasVersionOption() const {
  return m_parser.isSet(m_versionOption);
}

bool CommandLineParser::hasTestnetOption() const {
  return m_parser.isSet(m_testnetOption);
}

bool CommandLineParser::hasAllowLocalIpOption() const {
  return m_parser.isSet(m_allowLocalIpOption);
}

bool CommandLineParser::hasHideMyPortOption() const {
  return m_parser.isSet(m_hideMyPortOption);
}

QString CommandLineParser::getErrorText() const {
  return m_parser.errorText();
}

QString CommandLineParser::getHelpText() const {
  return m_parser.helpText();
}

QString CommandLineParser::getP2pBindIp() const {
  return m_parser.value(m_p2pBindIpOption);
}

quint16 CommandLineParser::getP2pBindPort() const {
  return m_parser.value(m_p2pBindPortOption).toUShort();
}

quint16 CommandLineParser::getP2pExternalPort() const {
  return m_parser.value(m_p2pExternalOption).toUShort();
}

QStringList CommandLineParser::getPeers() const {
  return m_parser.values(m_addPeerOption);
}

QStringList CommandLineParser::getPiorityNodes() const {
  return m_parser.values(m_addPriorityNodeOption);
}

QStringList CommandLineParser::getExclusiveNodes() const {
  return m_parser.values(m_addExclusiveNodeOption);
}

QStringList CommandLineParser::getSeedNodes() const {
  return m_parser.values(m_seedNodeOption);
}

QString CommandLineParser::getDataDir() const {
  return m_parser.value(m_dataDirOption);
}

}
