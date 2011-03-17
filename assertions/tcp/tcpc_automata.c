/*
 * This file is autogenerated by the Tesla CFA compiler
 * via: ../../cfa/splc -t tesla -s tcpc tcpc.spl
 */

#include <netinet/tcp_fsm.h>

#include <sys/types.h>

#ifdef _KERNEL
#include <sys/systm.h>
#else
#include <assert.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#endif

#include <tesla/tesla_state.h>
#include <tesla/tesla_util.h>

#include "tcpc_defs.h"

struct main {
  u_int state : 5;
  u_int active_close_return : 1;
  u_int established_return : 1;
} __attribute__((__packed__));

#define MAIN_PTR(tip) ((unsigned char *)((tip)->ti_state))
#define MAIN_STATE(tip,off) ((struct main *)(MAIN_PTR(tip)+(off)+1))
#define MAIN_NUM_STATES(tip) (MAIN_PTR(tip)[0])

void
tcpc_automata_init(struct tesla_instance *tip) {
  MAIN_NUM_STATES(tip) = 1;
  MAIN_STATE(tip,0)->state = 8; /* 25 */
  MAIN_STATE(tip,0)->active_close_return = 0;
  MAIN_STATE(tip,0)->established_return = 0;
}

int
tcpc_automata_prod(struct tesla_instance *tip, u_int event)
{
  unsigned char newstate[16];
  u_int i, curpos=1;
  struct main tmpstate;
  bzero(newstate, sizeof(newstate));
  switch (event) {
  case 0:  /* EVENT_TP_T_STATE_ASSIGN_TCPS_LAST_ACK */
    for (i=0; i < MAIN_NUM_STATES(tip); i++) {
      switch (MAIN_STATE(tip,i)->state) {
      case 20:
        /* event 21 -> 22 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 22;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        break;
      default:
        break;
      }
    }
    newstate[0] = curpos-1;
    if (newstate[0] == 0)
      return 1; /* TESLA_ERROR */
    memcpy(MAIN_PTR(tip), &newstate, sizeof(newstate));
    return 0;

  case 1:  /* EVENT_TP_T_STATE_ASSIGN_TCPS_CLOSING */
    for (i=0; i < MAIN_NUM_STATES(tip); i++) {
      switch (MAIN_STATE(tip,i)->state) {
      case 15:
        /* event 5 -> 6 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 16;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        break;
      default:
        break;
      }
    }
    newstate[0] = curpos-1;
    if (newstate[0] == 0)
      return 1; /* TESLA_ERROR */
    memcpy(MAIN_PTR(tip), &newstate, sizeof(newstate));
    return 0;

  case 2:  /* EVENT_TP_T_STATE_ASSIGN_TCPS_CLOSED */
    for (i=0; i < MAIN_NUM_STATES(tip); i++) {
      switch (MAIN_STATE(tip,i)->state) {
      case 8:
        /* event 25 -> 27 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 2;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        break;
      case 14:
        /* event 4 -> 2 */
        switch (MAIN_STATE(tip,i)->active_close_return) {
         case 1:
          /* event 4 -> 15 */
          tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
          tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
          tmpstate.state = 19;
          memcpy(&(newstate[curpos]), &tmpstate, 1);
          curpos++;
          break;
         case 0:
          /* event 4 -> 26 */
          tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
          tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
          tmpstate.state = 9;
          memcpy(&(newstate[curpos]), &tmpstate, 1);
          curpos++;
          break;
         default:
          return 1; /* TESLA_INTERNAL_ERROR */
        }
        break;
      case 22:
        /* event 22 -> 15 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 19;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        break;
      default:
        break;
      }
    }
    newstate[0] = curpos-1;
    if (newstate[0] == 0)
      return 1; /* TESLA_ERROR */
    memcpy(MAIN_PTR(tip), &newstate, sizeof(newstate));
    return 0;

  case 3:  /* EVENT_TP_T_STATE_ASSIGN_TCPS_ESTABLISHED */
    for (i=0; i < MAIN_NUM_STATES(tip); i++) {
      switch (MAIN_STATE(tip,i)->state) {
      case 4:
        /* event 35 -> 16 */
        /* register active_close_return = 1 */
        /* event 35 -> 1 */
        tmpstate.active_close_return = 1;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 11;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        /* event 35 -> 20 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 18;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        break;
      case 5:
        /* event 43 -> 16 */
        /* register active_close_return = 1 */
        /* event 43 -> 1 */
        tmpstate.active_close_return = 1;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 11;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        /* event 43 -> 20 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 18;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        break;
      default:
        break;
      }
    }
    newstate[0] = curpos-1;
    if (newstate[0] == 0)
      return 1; /* TESLA_ERROR */
    memcpy(MAIN_PTR(tip), &newstate, sizeof(newstate));
    return 0;

  case 4:  /* EVENT_TP_T_STATE_ASSIGN_TCPS_FIN_WAIT_1 */
    for (i=0; i < MAIN_NUM_STATES(tip); i++) {
      switch (MAIN_STATE(tip,i)->state) {
      case 11:
        /* event 1 -> 5 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 15;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        /* event 1 -> 8 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 10;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        break;
      default:
        break;
      }
    }
    newstate[0] = curpos-1;
    if (newstate[0] == 0)
      return 1; /* TESLA_ERROR */
    memcpy(MAIN_PTR(tip), &newstate, sizeof(newstate));
    return 0;

  case 5:  /* EVENT_TP_T_STATE_ASSIGN_TCPS_FIN_WAIT_2 */
    for (i=0; i < MAIN_NUM_STATES(tip); i++) {
      switch (MAIN_STATE(tip,i)->state) {
      case 10:
        /* event 8 -> 9 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 12;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        break;
      default:
        break;
      }
    }
    newstate[0] = curpos-1;
    if (newstate[0] == 0)
      return 1; /* TESLA_ERROR */
    memcpy(MAIN_PTR(tip), &newstate, sizeof(newstate));
    return 0;

  case 6:  /* EVENT_FUNC_PROLOGUE_TCP_FREE */
    for (i=0; i < MAIN_NUM_STATES(tip); i++) {
      switch (MAIN_STATE(tip,i)->state) {
      case 19:
        /* event 15 -> 13 */
        switch (MAIN_STATE(tip,i)->established_return) {
         case 0:
          /* event 15 -> 26 */
          tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
          tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
          tmpstate.state = 9;
          memcpy(&(newstate[curpos]), &tmpstate, 1);
          curpos++;
          break;
         case 1:
          /* event 15 -> 26 */
          tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
          tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
          tmpstate.state = 9;
          memcpy(&(newstate[curpos]), &tmpstate, 1);
          curpos++;
          break;
         default:
          return 1; /* TESLA_INTERNAL_ERROR */
        }
        break;
      default:
        break;
      }
    }
    newstate[0] = curpos-1;
    if (newstate[0] == 0)
      return 1; /* TESLA_ERROR */
    memcpy(MAIN_PTR(tip), &newstate, sizeof(newstate));
    return 0;

  case 7:  /* EVENT_TP_T_STATE_ASSIGN_TCPS_SYN_SENT */
    for (i=0; i < MAIN_NUM_STATES(tip); i++) {
      switch (MAIN_STATE(tip,i)->state) {
      case 2:
        /* event 27 -> 30 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 7;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        /* event 27 -> 41 */
        /* register established_return = 0 */
        /* event 27 -> 43 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = 0;
        tmpstate.state = 5;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        break;
      default:
        break;
      }
    }
    newstate[0] = curpos-1;
    if (newstate[0] == 0)
      return 1; /* TESLA_ERROR */
    memcpy(MAIN_PTR(tip), &newstate, sizeof(newstate));
    return 0;

  case 8:  /* EVENT_TP_T_STATE_ASSIGN_TCPS_CLOSE_WAIT */
    for (i=0; i < MAIN_NUM_STATES(tip); i++) {
      switch (MAIN_STATE(tip,i)->state) {
      case 18:
        /* event 20 -> 21 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 20;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        break;
      default:
        break;
      }
    }
    newstate[0] = curpos-1;
    if (newstate[0] == 0)
      return 1; /* TESLA_ERROR */
    memcpy(MAIN_PTR(tip), &newstate, sizeof(newstate));
    return 0;

  case 9:  /* EVENT_TP_T_STATE_ASSIGN_TCPS_SYN_RECEIVED */
    for (i=0; i < MAIN_NUM_STATES(tip); i++) {
      switch (MAIN_STATE(tip,i)->state) {
      case 7:
        /* event 30 -> 33 */
        /* register established_return = 1 */
        /* event 30 -> 35 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = 1;
        tmpstate.state = 4;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        /* event 30 -> 37 */
        /* register active_close_return = 0 */
        /* event 30 -> 1 */
        tmpstate.active_close_return = 0;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 11;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        break;
      default:
        break;
      }
    }
    newstate[0] = curpos-1;
    if (newstate[0] == 0)
      return 1; /* TESLA_ERROR */
    memcpy(MAIN_PTR(tip), &newstate, sizeof(newstate));
    return 0;

  case 10:  /* EVENT_TP_T_STATE_ASSIGN_TCPS_TIME_WAIT */
    for (i=0; i < MAIN_NUM_STATES(tip); i++) {
      switch (MAIN_STATE(tip,i)->state) {
      case 12:
        /* event 9 -> 4 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 14;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        break;
      case 16:
        /* event 6 -> 4 */
        tmpstate.active_close_return = MAIN_STATE(tip,i)->active_close_return;
        tmpstate.established_return = MAIN_STATE(tip,i)->established_return;
        tmpstate.state = 14;
        memcpy(&(newstate[curpos]), &tmpstate, 1);
        curpos++;
        break;
      default:
        break;
      }
    }
    newstate[0] = curpos-1;
    if (newstate[0] == 0)
      return 1; /* TESLA_ERROR */
    memcpy(MAIN_PTR(tip), &newstate, sizeof(newstate));
    return 0;

  default:
    return 1; /* TESLA_UNKNOWN_EVENT */
  }
}

