/*
 * This file Copyright (C) 2007-2014 Mnemosyne LLC
 *
 * It may be used under the GNU GPL versions 2 or 3
 * or any future license endorsed by Mnemosyne LLC.
 *
 */

#pragma once

#ifndef __TRANSMISSION__
#error only libtransmission should #include this header.
#endif

/**
 * @addtogroup port_forwarding Port Forwarding
 * @{
 */

struct tr_upnp;

tr_upnp* tr_upnpInit(void);

void tr_upnpClose(tr_upnp*);

tr_port_forwarding tr_upnpPulse(tr_upnp*, tr_port port, bool isEnabled, bool doPortCheck);

/* @} */
