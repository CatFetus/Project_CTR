#pragma once
#include "tik.h"

static const unsigned char default_contentIndex[0x30] =
{
	0x00, 0x01, 0x00, 0x14, 0x00, 0x00, 0x00, 0xAC, 
	0x00, 0x00, 0x00, 0x14, 0x00, 0x01, 0x00, 0x14, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x84, 
	0x00, 0x00, 0x00, 0x84, 0x00, 0x03, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
};

// Prototypes
int BuildTicket(cia_settings *ciaset);
int CryptTitleKey(u8 *EncTitleKey, u8 *DecTitleKey, u8 *TitleID, keys_struct *keys, u8 mode);