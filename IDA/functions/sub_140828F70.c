#include "../winhttp.h"

//----- (0000000140828F70) ----------------------------------------------------
void sub_140828F70()
{
	__int64 v0; // rcx
	__int64 v1; // rdx
	int v2; // eax
	__int64 i; // rbx
	LPCRITICAL_SECTION v4; // rbx
	int v5; // edi
	__int64 v6; // rbx
	int v7; // edi
	__int64 v8; // rbx
	int v9; // edi
	__int64 v10; // rbx
	int v11; // edi
	__int64 v12; // rbx
	int v13; // edi
	__int64 v14; // rbx
	int v15; // edi
	__int64 v16; // rbx
	int v17; // edi
	void* v18; // rcx
	__int64 v19; // rbx
	int v20; // edi
	__int64 v21; // rbx
	int v22; // edi
	LPCRITICAL_SECTION v23; // rbx
	int v24; // edi

	if (qword_140C61FE0)
		sub_1408468B0(qword_140C61FE0);
	if (qword_140C61B68)
		sub_14082EF00((__int64)qword_140C61B68);
	if (qword_140C61B58)
		sub_1408427E0(qword_140C61B58);
	sub_140833B90();
	v1 = qword_140C61BE0;
	v2 = ((qword_140C61BE8 - qword_140C61BE0) >> 3) - 1;
	for (i = v2; i >= 0; v1 = qword_140C61BE0)
	{
		LOBYTE(v0) = 1;
		(*(void(__fastcall**)(__int64))(v1 + 8 * i--))(v0);
	}
	if (v1)
	{
		qword_140C61BE8 = v1;
		sub_140881720(dword_140C10F20, v1);
		qword_140C61BE0 = 0i64;
		qword_140C61BE8 = 0i64;
		dword_140C61BF0 = 0;
	}
	sub_140844BB0();
	if (qword_140C61B68)
	{
		sub_14082F950((__int64)qword_140C61B68);
		v4 = qword_140C61B68;
		v5 = dword_140C10F20;
		if (qword_140C61B68)
		{
			sub_14082B430(qword_140C61B68);
			sub_140881720(v5, (__int64)v4);
		}
		qword_140C61B68 = 0i64;
	}
	if (qword_140C61B58)
	{
		sub_1408428E0(qword_140C61B58);
		v6 = qword_140C61B58;
		v7 = dword_140C10F20;
		if (qword_140C61B58)
		{
			sub_14083DEE0((struct _RTL_CRITICAL_SECTION*)qword_140C61B58);
			sub_140881720(v7, v6);
		}
		qword_140C61B58 = 0i64;
	}
	if (qword_140C61BA8)
		sub_1408311F0(qword_140C61BA8);
	if (qword_140C61B78)
	{
		sub_14082AE90(qword_140C61B78);
		v8 = qword_140C61B78;
		v9 = dword_140C10F20;
		if (qword_140C61B78)
		{
			sub_140829BD0((struct _RTL_CRITICAL_SECTION*)qword_140C61B78);
			sub_140881720(v9, v8);
		}
		qword_140C61B78 = 0i64;
	}
	if (qword_140C61B98)
	{
		sub_14083A8B0(qword_140C61B98);
		v10 = qword_140C61B98;
		v11 = dword_140C10F20;
		if (qword_140C61B98)
		{
			nullsub_1(qword_140C61B98);
			sub_140881720(v11, v10);
		}
		qword_140C61B98 = 0i64;
	}
	if (qword_140C61B70)
	{
		sub_14083B0E0(qword_140C61B70);
		v12 = qword_140C61B70;
		v13 = dword_140C10F20;
		if (qword_140C61B70)
		{
			nullsub_1(qword_140C61B70);
			sub_140881720(v13, v12);
		}
		qword_140C61B70 = 0i64;
	}
	if (qword_140C61BA0)
	{
		sub_140830BB0(qword_140C61BA0);
		v14 = qword_140C61BA0;
		v15 = dword_140C10F20;
		if (qword_140C61BA0)
		{
			nullsub_1(qword_140C61BA0);
			sub_140881720(v15, v14);
		}
		qword_140C61BA0 = 0i64;
	}
	if (qword_140C61B80)
	{
		nullsub_1(qword_140C61B80);
		v16 = qword_140C61B80;
		v17 = dword_140C10F20;
		if (qword_140C61B80)
		{
			sub_14083B1C0(qword_140C61B80 + 304);
			v18 = *(void**)(v16 + 296);
			if (v18)
				CloseHandle(v18);
			DeleteCriticalSection((LPCRITICAL_SECTION)(v16 + 256));
			sub_140881720(v17, v16);
		}
		qword_140C61B80 = 0i64;
	}
	if (qword_140C61B60)
	{
		sub_14088C760(qword_140C61B60);
		v19 = qword_140C61B60;
		v20 = dword_140C10F20;
		if (qword_140C61B60)
		{
			DeleteCriticalSection((LPCRITICAL_SECTION)(qword_140C61B60 + 24));
			sub_140881720(v20, v19);
		}
		qword_140C61B60 = 0i64;
	}
	if (qword_140C61B90)
	{
		sub_140845200(qword_140C61B90);
		if (qword_140C61B90)
			sub_140881720(dword_140C10F20, qword_140C61B90);
		qword_140C61B90 = 0i64;
	}
	if (qword_140C61BB0)
	{
		sub_140838960(qword_140C61BB0);
		v21 = qword_140C61BB0;
		v22 = dword_140C10F20;
		if (qword_140C61BB0)
		{
			nullsub_1(qword_140C61BB0);
			sub_140881720(v22, v21);
		}
		qword_140C61BB0 = 0i64;
	}
	if (qword_140C61BA8)
	{
		nullsub_1(qword_140C61BA8);
		v23 = qword_140C61BA8;
		v24 = dword_140C10F20;
		if (qword_140C61BA8)
		{
			sub_140826F50((__int64)qword_140C61BA8);
			sub_140881720(v24, (__int64)v23);
		}
		qword_140C61BA8 = 0i64;
	}
	if (qword_140C61BE0)
	{
		qword_140C61BE8 = qword_140C61BE0;
		sub_140881720(dword_140C10F20, qword_140C61BE0);
		qword_140C61BE0 = 0i64;
		qword_140C61BE8 = 0i64;
		dword_140C61BF0 = 0;
	}
	if (dword_140C10F20 != -1)
	{
		sub_140881DD0(dword_140C10F20);
		dword_140C10F20 = -1;
	}
	byte_140C61B50 = 0;
}
// 140828FD4: variable 'v0' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B50: using guessed type char byte_140C61B50;
// 140C61B58: using guessed type __int64 qword_140C61B58;
// 140C61B60: using guessed type __int64 qword_140C61B60;
// 140C61B70: using guessed type __int64 qword_140C61B70;
// 140C61B78: using guessed type __int64 qword_140C61B78;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 140C61B90: using guessed type __int64 qword_140C61B90;
// 140C61B98: using guessed type __int64 qword_140C61B98;
// 140C61BA0: using guessed type __int64 qword_140C61BA0;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;
// 140C61BE0: using guessed type __int64 qword_140C61BE0;
// 140C61BE8: using guessed type __int64 qword_140C61BE8;
// 140C61BF0: using guessed type int dword_140C61BF0;
// 140C61FE0: using guessed type __int64 qword_140C61FE0;

