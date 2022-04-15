//----- (000000014078CD50) ----------------------------------------------------
_BYTE* __fastcall sub_14078CD50(_QWORD* a1)
{
	void** v2; // rax
	void** v3; // rax
	_BYTE* result; // rax
	char* v5; // rax
	int v6; // ecx
	int v7; // edx
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v10; // r9
	__int64 v11; // rax
	int v12; // eax
	__int64 v13; // rdi
	__int64 v14; // rsi
	int v15; // r14d
	__int64 v16; // r9
	__int64 v17; // rax
	int* v18; // rdi
	void** v19; // rax
	void** v20; // rax
	void** v21; // rax
	void** v22; // rax
	__int64 v23[2]; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v24; // [rsp+40h] [rbp-C0h] BYREF
	int v25; // [rsp+48h] [rbp-B8h]
	__int64* v26; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v27; // [rsp+58h] [rbp-A8h]
	__int64 v28; // [rsp+68h] [rbp-98h]
	char* v29; // [rsp+70h] [rbp-90h]
	__int64 v30[5]; // [rsp+78h] [rbp-88h] BYREF
	char v31[256]; // [rsp+A0h] [rbp-60h] BYREF

	v2 = sub_1407DDFA0();
	sub_140900A64((int*)aLuaDebug, (unsigned __int64)(v2 + 12));
	v3 = sub_1407DDFA0();
	result = sub_140900B90(v31, 250, (unsigned __int64)v3);
	if (result)
	{
		while (1)
		{
			v5 = v31;
			do
			{
				v6 = (unsigned __int8)v5[aCont - v31];
				v7 = (unsigned __int8)*v5 - v6;
				if (v7)
					break;
				++v5;
			} while (v6);
			if (!v7)
				return 0i64;
			v23[0] = (__int64)v31;
			v8 = -1i64;
			do
				++v8;
			while (v31[v8]);
			v9 = a1[2];
			v23[1] = v8;
			v10 = v9 - a1[8];
			v30[3] = (__int64)v23;
			v26 = v30;
			v11 = a1[22];
			v30[4] = (__int64)a1;
			v30[2] = (__int64)sub_140057F60;
			v30[0] = 0i64;
			v30[1] = 0i64;
			v29 = aDebugCommand;
			v27 = 0i64;
			v28 = 0i64;
			v12 = sub_140061FB0((__int64)a1, (void(__fastcall*)(__int64, __int64))sub_1400620B0, (__int64)&v26, v10, v11);
			v13 = a1[4];
			v14 = v28;
			v15 = v12;
			(*(void(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(v13 + 16))(*(_QWORD*)(v13 + 24), v27, v28, 0i64);
			*(_QWORD*)(v13 + 120) -= v14;
			if (v15)
				break;
			v16 = a1[2] - 16i64;
			v25 = 0;
			v24 = v16;
			if ((unsigned int)sub_140061FB0(
				(__int64)a1,
				(void(__fastcall*)(__int64, __int64))sub_140058DB0,
				(__int64)&v24,
				v16 - a1[8],
				0i64))
				break;
		LABEL_18:
			while (a1[2] < a1[3])
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			a1[2] = a1[3];
			v21 = sub_1407DDFA0();
			sub_140900A64((int*)aLuaDebug, (unsigned __int64)(v21 + 12));
			v22 = sub_1407DDFA0();
			if (!sub_140900B90(v31, 250, (unsigned __int64)v22))
				return 0i64;
		}
		v17 = a1[2] - 16i64;
		if (*(_DWORD*)(v17 + 8) != 4)
		{
			if (!(unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
			{
				v18 = 0i64;
			LABEL_17:
				v19 = sub_1407DDFA0();
				sub_140900A64(v18, (unsigned __int64)(v19 + 12));
				v20 = sub_1407DDFA0();
				sub_140900A64((int*)asc_140C2CC5C, (unsigned __int64)(v20 + 12));
				goto LABEL_18;
			}
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v17 = a1[2] - 16i64;
		}
		v18 = (int*)(*(_QWORD*)v17 + 32i64);
		goto LABEL_17;
	}
	return result;
}
// 14078CD50: using guessed type char var_130[256];

