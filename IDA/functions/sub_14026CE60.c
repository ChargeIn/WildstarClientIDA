//----- (000000014026CE60) ----------------------------------------------------
__int64 __fastcall sub_14026CE60(__int64 a1, __int64* a2)
{
	unsigned int v5; // eax
	__int64 v6; // r12
	int* v7; // rax
	__int64 v8; // r14
	unsigned int v9; // esi
	__int64 v10; // rbx
	int v11; // ebp
	int v12; // eax
	int v13; // eax
	int v14; // eax
	unsigned __int64 v15; // rbx
	__int64 v16; // r10
	unsigned int v17; // r9d
	__int64 v18; // rcx
	__int64 v19; // rax
	_QWORD* v20; // r8
	unsigned __int64 v21; // [rsp+38h] [rbp-70h] BYREF
	unsigned __int64 v22; // [rsp+40h] [rbp-68h]
	__int64 v23; // [rsp+48h] [rbp-60h]
	unsigned __int64 v24; // [rsp+50h] [rbp-58h] BYREF
	__int64 v25; // [rsp+58h] [rbp-50h]

	if (!a2)
		return 2147942487i64;
	v5 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6592) + 48i64))(
		*(_QWORD*)(a1 + 6592),
		*(unsigned int*)(a1 + 6548),
		22i64);
	v6 = v5;
	if (v5)
	{
		v7 = sub_14018B280(40i64 * v5 + 16, 0);
		if (v7)
		{
			v8 = (__int64)(v7 + 4);
			*(_QWORD*)v7 = &off_140B5F110;
		}
		else
		{
			v8 = 16i64;
		}
	}
	else
	{
		v8 = 0i64;
	}
	v9 = 0;
	if ((_DWORD)v6)
	{
		v10 = v8 + 8;
		while (1)
		{
			v11 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD, unsigned __int64*))(**(_QWORD**)(a1 + 6592)
				+ 56i64))(
					*(_QWORD*)(a1 + 6592),
					*(unsigned int*)(a1 + 6548),
					22i64,
					v9,
					&v24);
			if (v11 < 0)
				break;
			v12 = v24;
			++v9;
			*(_DWORD*)v10 = 1;
			*(_DWORD*)(v10 - 8) = v12;
			v13 = HIDWORD(v24);
			*(_DWORD*)(v10 + 4) = 23;
			*(_DWORD*)(v10 - 4) = v13;
			v14 = v25;
			*(_QWORD*)(v10 + 16) = 0i64;
			*(_DWORD*)(v10 + 24) = 0;
			*(_DWORD*)(v10 + 8) = v14;
			v10 += 40i64;
			if (v9 >= (unsigned int)v6)
				goto LABEL_12;
		}
	}
	else
	{
	LABEL_12:
		v24 = 0i64;
		v25 = v6;
		sub_1401D3110(&v21, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_140264980, &v24, v8, 26);
		v15 = v22;
		sub_1402759A0(a2, v22);
		v16 = v23;
		v17 = 0;
		if (a2[1])
		{
			v18 = 0i64;
			do
			{
				v19 = *(_QWORD*)(v16 + 8 * v18);
				++v17;
				v20 = (_QWORD*)(*a2 + 40 * v18);
				v18 = v17;
				*v20 = *(_QWORD*)(v8 + 40 * v19);
				v20[1] = *(_QWORD*)(v8 + 40 * v19 + 8);
				v20[2] = *(_QWORD*)(v8 + 40 * v19 + 16);
				v20[3] = *(_QWORD*)(v8 + 40 * v19 + 24);
				v20[4] = *(_QWORD*)(v8 + 40 * v19 + 32);
			} while (v17 < (unsigned __int64)a2[1]);
		}
		v11 = 0;
		if (v21 < v15)
			sub_14018B900(v16 + 8 * v21, 0);
	}
	if (v8)
		(**(void(__fastcall***)(__int64))(v8 - 16))(v8 - 16);
	return (unsigned int)v11;
}
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();

