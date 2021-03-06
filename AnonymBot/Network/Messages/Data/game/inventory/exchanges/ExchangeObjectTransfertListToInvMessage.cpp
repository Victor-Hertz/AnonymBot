#include "ExchangeObjectTransfertListToInvMessage.h"

void ExchangeObjectTransfertListToInvMessage::serialize(Writer *param1)
{
  this->serializeAs_ExchangeObjectTransfertListToInvMessage(param1);
}

void ExchangeObjectTransfertListToInvMessage::serializeAs_ExchangeObjectTransfertListToInvMessage(Writer *param1)
{
  param1->writeShort((short)this->ids.size());
  uint _loc2_ = 0;
  while(_loc2_ < this->ids.size())
  {
    if(this->ids[_loc2_] < 0)
    {
      qDebug()<<"ERREUR - ExchangeObjectTransfertListToInvMessage -"<<"Forbidden value (" << this->ids[_loc2_] << ") on element 1 (starting at 1) of ids.";
    }
    else
    {
      param1->writeVarInt((int)this->ids[_loc2_]);
      _loc2_++;
      continue;
    }
  }
}

void ExchangeObjectTransfertListToInvMessage::deserialize(Reader *param1)
{
  this->deserializeAs_ExchangeObjectTransfertListToInvMessage(param1);
}

void ExchangeObjectTransfertListToInvMessage::deserializeAs_ExchangeObjectTransfertListToInvMessage(Reader *param1)
{
  uint _loc4_ = 0;
  uint _loc2_ = param1->readUShort();
  uint _loc3_ = 0;
  while(_loc3_ < _loc2_)
  {
    _loc4_ = param1->readVarUhInt();
    if(_loc4_ < 0)
    {
      qDebug()<<"ERREUR - ExchangeObjectTransfertListToInvMessage -"<<"Forbidden value (" << _loc4_ << ") on elements of ids.";
    }
    else
    {
      this->ids.append(_loc4_);
      _loc3_++;
      continue;
    }
  }
}

ExchangeObjectTransfertListToInvMessage::ExchangeObjectTransfertListToInvMessage()
{
  m_type = MessageEnum::EXCHANGEOBJECTTRANSFERTLISTTOINVMESSAGE;
}

