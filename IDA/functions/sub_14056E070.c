#include "../winhttp.h"

//----- (000000014056E070) ----------------------------------------------------
__int64 __fastcall sub_14056E070(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	int* v5; // rax
	unsigned int v6; // edi
	int* v7; // rax
	__int64 v8; // rcx
	_DWORD* v9; // rbx
	__int64 v10; // r14
	unsigned int v11; // r8d
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rdi
	__int64 v15; // rcx
	bool v16; // zf

	v2 = qword_140C65970;
	sub_140572A50(a1, *(_DWORD*)a2);
	*(_QWORD*)a1 = off_140B6C8B8;
	v5 = sub_14018B280(40i64, 0);
	v6 = 0;
	*(_QWORD*)(a1 + 136) = v5;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_BYTE*)v5 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 136) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 136) + 16i64) = *(_QWORD*)(a1 + 136);
	*(_QWORD*)(*(_QWORD*)(a1 + 136) + 24i64) = *(_QWORD*)(a1 + 136);
	v7 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 168) = v7;
	*(_BYTE*)v7 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64) = 0i64;
	v8 = a1 + 48;
	*(_QWORD*)(*(_QWORD*)(a1 + 168) + 16i64) = *(_QWORD*)(a1 + 168);
	*(_QWORD*)(*(_QWORD*)(a1 + 168) + 24i64) = *(_QWORD*)(a1 + 168);
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_DWORD*)(a1 + 216) = 1414420037;
	*(_DWORD*)(a1 + 284) = 0;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_DWORD*)(a1 + 288) = 4;
	*(_DWORD*)(a1 + 12) = *(unsigned __int8*)(a2 + 20);
	if (a1 != -48)
		sub_1401E82F0((__int64*)v8, *(float*)(a2 + 24));
	v9 = (_DWORD*)(a1 + 32);
	v10 = a2 - a1;
	do
	{
		v11 = *(_DWORD*)((char*)v9 + v10 - 28);
		*(v9 - 4) = v11;
		v12 = sub_140491D60(v8, v6, v11);
		if (v12)
			v8 = *(unsigned int*)(*(_QWORD*)v12 + 8i64);
		else
			v8 = (unsigned int)*v9;
		++v6;
		*v9++ = v8;
	} while (v6 < 4);
	if (v2)
	{
		sub_14056E480(v2);
		sub_1404956E0(a1 + 56, v2 + 56);
		sub_140008410(v2 + 56);
	}
	v13 = *(_QWORD*)(qword_140C65920 + 8);
	if (v13)
	{
		do
		{
			v14 = *(_QWORD*)(v13 + 32);
			if (!*(_DWORD*)(v13 + 56))
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
				(**(void(__fastcall***)(__int64, __int64))v13)(v13, 1i64);
			}
			v13 = v14;
		} while (v14);
	}
	v15 = qword_140C65898;
	if (qword_140C65898)
	{
		v16 = qword_140C65B78 == 0;
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
		if (!v16)
		{
			sub_140575DD0();
			v15 = qword_140C65898;
		}
		sub_1400EA3E0(*(_QWORD*)(v15 + 29504), "PlayerPathRefresh", byte_1409D10FF);
	}
	return a1;
}
// 14056E19B: variable 'v8' is possibly undefined
// 1409D10FF: using guessed type _BYTE byte_1409D10FF[67];
// 140B6C8B8: using guessed type __int64 (__fastcall *off_140B6C8B8[5])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65B78: using guessed type __int64 qword_140C65B78;

