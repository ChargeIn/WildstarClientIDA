#include "../winhttp.h"

//----- (0000000140458140) ----------------------------------------------------
__int64 __fastcall sub_140458140(__int64 a1, __int64 a2, unsigned int a3)
{
	int* v4; // rsi
	__int64 v5; // rbp
	int v6; // eax
	int v7; // ebx
	int v8; // xmm0_4
	__int64 v9; // rdx
	__int64 v10; // rax
	unsigned int v11; // eax
	int v12; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-68h] BYREF
	__int128 v15; // [rsp+28h] [rbp-60h]
	__int64(__fastcall * *v16)(); // [rsp+40h] [rbp-48h] BYREF
	__int128 v17; // [rsp+48h] [rbp-40h]
	__int64 v18; // [rsp+90h] [rbp+8h] BYREF

	*(_QWORD*)(a1 + 440) = 0i64;
	*(_DWORD*)(a1 + 452) = 0;
	*(_QWORD*)(a1 + 460) = 0i64;
	*(_QWORD*)(a1 + 468) = 0i64;
	*(_QWORD*)(a1 + 476) = 0i64;
	if (a3)
	{
		v4 = (int*)(a2 + 4);
		v5 = a3;
		do
		{
			v6 = *v4;
			if (*v4)
			{
				if (v6 == 2)
					v7 = v4[1];
				else
					v7 = 0;
			}
			else
			{
				v7 = v4[1];
			}
			if (v6 == 1)
				v8 = v4[1];
			else
				v8 = 0;
			if (v6 == 2)
				v9 = (unsigned int)v4[2];
			else
				v9 = 0i64;
			switch (*(v4 - 1))
			{
			case 0:
				*(_DWORD*)(a1 + 64) = v7;
				break;
			case 1:
				*(_DWORD*)(a1 + 536) = v8;
				break;
			case 2:
				*(_DWORD*)(a1 + 540) = v8;
				break;
			case 3:
				*(_DWORD*)(a1 + 544) = v8;
				break;
			case 4:
				*(_DWORD*)(a1 + 548) = v8;
				break;
			case 5:
				*(_DWORD*)(a1 + 552) = v8;
				break;
			case 6:
				*(_DWORD*)(a1 + 556) = v8;
				break;
			case 7:
				*(_DWORD*)(a1 + 560) = v8;
				break;
			case 8:
				*(_DWORD*)(a1 + 564) = v8;
				break;
			case 9:
				*(_DWORD*)(a1 + 568) = v8;
				break;
			case 10:
				*(_DWORD*)(a1 + 56) = v7;
				break;
			case 11:
				*(_DWORD*)(a1 + 60) = v7;
				break;
			case 12:
				*(_DWORD*)(a1 + 444) = v7;
				*(_DWORD*)(a1 + 440) = v7;
				*(_DWORD*)(a1 + 464) = v9;
				*(_DWORD*)(a1 + 460) = v9;
				break;
			case 13:
				*(_DWORD*)(a1 + 444) = v7;
				*(_DWORD*)(a1 + 464) = v9;
				break;
			case 14:
				v10 = qword_140C65898;
				*(_DWORD*)(a1 + 452) = 1;
				*(_DWORD*)(a1 + 456) = v7
					- (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v10 + 29264) + 56i64))(
						*(_QWORD*)(v10 + 29264),
						v9);
				break;
			case 15:
				if (v7)
				{
					*(_DWORD*)(a1 + 5160) = 63;
					*(_DWORD*)(a1 + 5164) = 63;
				}
				else
				{
					v11 = *(_DWORD*)(a1 + 5160) & 0xFFFFFFFE;
					*(_DWORD*)(a1 + 5160) = v11;
					*(_DWORD*)(a1 + 5164) = v11;
				}
				break;
			case 19:
				*(_DWORD*)(a1 + 68) = v8;
				break;
			case 20:
				*(_DWORD*)(a1 + 72) = v7;
				break;
			case 21:
				*(_DWORD*)(a1 + 1200) = v7;
				break;
			case 22:
				*(_DWORD*)(a1 + 76) = v7;
				break;
			case 23:
				*(_DWORD*)(a1 + 572) = v8;
				break;
			case 24:
				*(_DWORD*)(a1 + 576) = v8;
				break;
			case 25:
				*(_DWORD*)(a1 + 580) = v8;
				break;
			default:
				TlsValue = &off_140B5E648;
				*(_QWORD*)&v15 = 0i64;
				*((_QWORD*)&v15 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v16 = TlsValue;
				v18 = 0x141E024E0i64;
				v17 = v15;
				v12 = sub_1401971E0(&dword_140C8AC84, 5, &v18, &v16);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v15 + 1));
				if (v12)
					DebugBreak();
				break;
			}
			v4 += 4;
			--v5;
		} while (v5);
	}
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8AC84: using guessed type _DWORD dword_140C8AC84;

