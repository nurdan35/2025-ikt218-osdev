#ifndef IRQ_H
#define IRQ_H

#include "isr.h"

void irq_install();
void irq_handler(struct regs *r);
void irq_install_handler(int irq, void (*handler)(struct regs *r));


#endif
