#pragma once

class Connection
{
  public:
      virtual bool isOpen(void) = 0;
      virtual void init(void) = 0;
      virtual void start(void) = 0;
      virtual void loop(void) = 0;
};