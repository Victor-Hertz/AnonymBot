#ifndef CHECKINTEGRITYMESSAGE_H
#define CHECKINTEGRITYMESSAGE_H

#include "Network/Messages/AbstractMessage.h"

class CheckIntegrityMessage : public AbstractMessage
{
public:
  virtual void serialize(Writer *param1);
  void serializeAs_CheckIntegrityMessage(Writer *param1);
  virtual void deserialize(Reader *param1);
  void deserializeAs_CheckIntegrityMessage(Reader *param1);
  CheckIntegrityMessage();

  QList<int> data;
};

#endif // CHECKINTEGRITYMESSAGE_H