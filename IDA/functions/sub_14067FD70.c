//----- (000000014067FD70) ----------------------------------------------------
__int64 __fastcall sub_14067FD70(_QWORD* a1)
{
	_QWORD** v2; // rax
	_QWORD** v3; // rsi
	unsigned int v4; // ebx
	unsigned int v5; // eax
	__int64 v6; // rcx
	int v7; // eax
	_DWORD* v8; // rcx
	_DWORD* v9; // rax

	v2 = (_QWORD**)sub_14067B760(a1);
	v3 = v2;
	if (v2 && *(_DWORD*)(*v2[6] + 12i64) == 13 && ((unsigned int(__fastcall*)(_QWORD**))(*v2)[26])(v2) == 3)
	{
		v4 = sub_1400584E0((__int64)a1, 2);
		v5 = ((__int64(__fastcall*)(_QWORD**))(*v3)[1])(v3);
		v7 = sub_14077D240(v6, v5, v4);
		v8 = (_DWORD*)a1[2];
		v8[2] = 1;
		*v8 = v7 >= 0;
	}
	else
	{
		v9 = (_DWORD*)a1[2];
		*v9 = 0;
		v9[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 14067FDC9: variable 'v6' is possibly undefined

