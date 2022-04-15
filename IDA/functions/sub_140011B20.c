#include "../winhttp.h"

//----- (0000000140011B20) ----------------------------------------------------
__int64 __fastcall sub_140011B20(unsigned __int16 a1)
{
	__int16 v2[97]; // [rsp+0h] [rbp-FAh]
	__int64 v3; // [rsp+C2h] [rbp-38h]
	int v4; // [rsp+CAh] [rbp-30h]
	__int16 v5; // [rsp+CEh] [rbp-2Ch]
	__int64 v6; // [rsp+D2h] [rbp-28h]
	__int64 v7; // [rsp+DAh] [rbp-20h]
	int v8; // [rsp+E2h] [rbp-18h]
	__int16 v9; // [rsp+E6h] [rbp-14h]

	v6 = 0x63006600640062i64;
	v7 = 0x6C006A00610062i64;
	v8 = 3604593;
	v9 = 0;
	v3 = 0x34003300320031i64;
	v4 = 3538997;
	v5 = 0;
	if ((unsigned __int16)(a1 - 48) <= 9u)
		return (unsigned __int16)v2[a1 + 57];
	if ((unsigned __int16)(a1 - 97) <= 5u)
		return (unsigned __int16)v2[a1];
	if ((unsigned __int16)(a1 - 65) > 5u)
		return 88i64;
	return (unsigned __int16)v2[a1 + 32];
}

