// Copyright 2022 DegtyarevPaul
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T>
class TPQueue {
ITEM* head;
ITEM* tail;
TPQueue::ITEM* create(const T& value) {
ITEM* i = new ITEM;
i->tim = value;
i->next = nullptr;
return i;
    }
  struct ITEM {
    T tim;
    ITEM* next;
  };
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
