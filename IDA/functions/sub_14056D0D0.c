#include "../winhttp.h"

//----- (000000014056D0D0) ----------------------------------------------------
__int64 __fastcall sub_14056D0D0(__int64** a1)
{
	unsigned int v1; // edi
	__int64 v3; // rdx
	__int64 result; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	_DWORD* v7; // rax
	unsigned int v8; // ecx
	__int64 v9; // rax
	unsigned int v10; // ebx
	unsigned int v11; // eax
	unsigned int v12; // ecx
	unsigned int v13; // edi
	unsigned int v14; // eax
	unsigned int v15; // edx
	__int64 v16; // rax

	v1 = 0;
	v3 = *a1[6];
	switch (*(_DWORD*)(v3 + 12))
	{
	case 2:
	case 4:
	case 7:
	case 0x13:
	case 0x15:
	case 0x18:
		return ((__int64(__fastcall*)(__int64**, __int64, unsigned __int64))(*a1)[8])(a1, v3, 0x140000000ui64);
	case 3:
	case 0xD:
	case 0xF:
	case 0x14:
	case 0x17:
	case 0x19:
	case 0x1A:
	case 0x1B:
		return ((__int64(__fastcall*)(__int64**, __int64, unsigned __int64))(*a1)[9])(a1, v3, 0x140000000ui64);
	case 5:
	case 6:
		v9 = sub_140223380(*(_DWORD*)(v3 + 20));
		if (!v9)
			goto LABEL_21;
		LOBYTE(v1) = *(_DWORD*)(v9 + 16) != 0;
		v10 = v1;
		v11 = ((__int64(__fastcall*)(__int64**))(*a1)[8])(a1);
		v1 = v11;
		if (!v10)
			goto LABEL_21;
		v12 = v11 - ((v11 >> 2) & 0x9249249) - ((v11 >> 1) & 0x5B6DB6DB);
		v13 = v12 + (v12 >> 3);
		goto LABEL_18;
	case 0xE:
		v5 = sub_14021FC40(*(_DWORD*)(v3 + 20));
		if (!v5)
			goto LABEL_21;
		if (((unsigned int(__fastcall*)(__int64**))(*a1)[7])(a1))
			LABEL_8:
		result = 100i64;
		else
			result = 100 * ((unsigned int(__fastcall*)(__int64**))(*a1)[9])(a1) / *(_DWORD*)(v5 + 48);
		break;
	case 0x10:
		if (((unsigned int(__fastcall*)(__int64**, __int64, unsigned __int64))(*a1)[7])(a1, v3, 0x140000000ui64))
			goto LABEL_8;
		if (qword_140C658F8
			&& (v6 = sub_140448420(*a1[6], *(_DWORD*)(*a1[6] + 20))) != 0
			&& (v7 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 168i64))(v6), (v8 = v7[1]) != 0))
		{
			result = 100 * *v7 / v8;
		}
		else
		{
		LABEL_21:
			result = v1;
		}
		break;
	case 0x11:
		if (!sub_14021CD80(*(_DWORD*)(v3 + 20)))
			goto LABEL_21;
		v14 = ((__int64(__fastcall*)(__int64**))(*a1)[8])(a1);
		v15 = v14 - ((v14 >> 2) & 0x9249249) - ((v14 >> 1) & 0x5B6DB6DB);
		v13 = v15 + (v15 >> 3);
	LABEL_18:
		result = (v13 & 0xC71C71C7) % 0x3F;
		break;
	case 0x12:
		v16 = ((__int64(__fastcall*)(__int64**, __int64, unsigned __int64))(*a1)[15])(
			a1,
			1347241296i64,
			0x140000000ui64);
		if (v16)
			v1 = *(_DWORD*)(v16 + 28);
		goto LABEL_21;
	default:
		goto LABEL_21;
	}
	return result;
}
// 140C658F8: using guessed type __int64 qword_140C658F8;

