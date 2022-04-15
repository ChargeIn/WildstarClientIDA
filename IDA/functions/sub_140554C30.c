#include "../winhttp.h"

//----- (0000000140554C30) ----------------------------------------------------
void __fastcall sub_140554C30(__int64 a1, int a2)
{
	_QWORD* v3; // r8
	_QWORD* v4; // rax
	int v5; // r10d
	__int64 v6; // rcx
	unsigned int v7; // edx
	_QWORD** v8; // rcx
	_QWORD* i; // rax
	_QWORD** v10; // rcx
	_QWORD* v11; // rax
	__int64 v12; // rdx
	_QWORD** v13; // rdx
	__int64 v14; // r8
	_QWORD* v15; // rax
	__int64* v16; // rbx
	__int64 v17; // rdi
	unsigned int v18; // eax

	v3 = *(_QWORD**)(qword_140C7DCD0 + 56);
	v4 = (_QWORD*)*v3;
	if ((_QWORD*)*v3 != v3)
	{
		v5 = 11712;
		while (1)
		{
			v6 = v4[2];
			v7 = *(_DWORD*)(v6 + 56);
			if (v7 <= 0xD && _bittest(&v5, v7) && *(_DWORD*)(v6 + 60) == a2)
				break;
			v4 = (_QWORD*)*v4;
			if (v4 == v3)
				return;
		}
		sub_140555040((__int64)&qword_140C7DC60);
		v8 = *(_QWORD***)(qword_140C7DCD0 + 24);
		for (i = *v8; i != v8; i = (_QWORD*)*i)
			;
		v10 = *(_QWORD***)(qword_140C7DCD0 + 40);
		v11 = *v10;
		v12 = 0i64;
		if (*v10 != v10)
		{
			do
			{
				v11 = (_QWORD*)*v11;
				++v12;
			} while (v11 != v10);
			if (v12)
				goto LABEL_16;
		}
		v13 = *(_QWORD***)(qword_140C7DCD0 + 56);
		v14 = 0i64;
		v15 = *v13;
		if (*v13 == v13)
			goto LABEL_17;
		do
		{
			v15 = (_QWORD*)*v15;
			++v14;
		} while (v15 != v13);
		if (!v14)
		{
		LABEL_17:
			if ((_DWORD)qword_140C7DC60)
			{
				sub_1405548F0((__int64)&qword_140C7DC60);
			}
			else
			{
				*(__int64*)((char*)&qword_140C7DC60 + 4) = 0i64;
				qword_140C7DC6C = -4294966996i64;
				if (*(_DWORD*)(qword_140C65898 + 26180) == 37)
					sub_1403A71F0(qword_140C65898, 0, 0x65u, 1);
			}
		}
		else
		{
		LABEL_16:
			sub_140558930((__int64)&qword_140C7DC60, 1, 0, 0);
		}
		if (*(_QWORD*)(qword_140C63628 + 728))
		{
			if (*(_QWORD*)(qword_140C63628 + 744))
			{
				v16 = *(__int64**)(qword_140C63628 + 728);
				v17 = *v16;
				v18 = sub_1400518A0(qword_140C63628, 18, 1, 0);
				(*(void(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v17 + 16))(
					v16,
					v18,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64);
			}
		}
	}
}
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC6C: using guessed type __int64 qword_140C7DC6C;
// 140C7DCD0: using guessed type __int64 qword_140C7DCD0;

