//----- (00000001407232A0) ----------------------------------------------------
__int64 __fastcall sub_1407232A0(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	__int64 v6; // r14
	unsigned int v7; // esi
	unsigned int v8; // edi
	__int64 v9; // r9
	__int64 v10; // r8
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64* v14; // rbx
	__int64 v15; // rbx
	__int64 i; // rax
	__int64* v17; // rbx
	__int64 v18; // r8
	__int64 v19; // [rsp+30h] [rbp-48h] BYREF
	__int64 v20; // [rsp+88h] [rbp+10h] BYREF
	__int64 v21; // [rsp+90h] [rbp+18h] BYREF
	__int64 v22; // [rsp+98h] [rbp+20h] BYREF

	v2 = *(_QWORD*)(a2 + 24);
	if (!v2)
		return 0i64;
	v6 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v6)
		return 0i64;
	v7 = *(_DWORD*)(v2 + 224);
	v8 = *(_DWORD*)(a1 + 64);
	while (1)
	{
		v9 = *(_QWORD*)(a1 + 8);
		v10 = *(_QWORD*)(v9 + 40i64 * *(unsigned int*)(*(_QWORD*)(a1 + 40) + 4i64 * v8) + 8);
		v11 = v10;
		v12 = *(_QWORD*)(v10 + 8);
		v13 = v12;
		while (v13)
		{
			if (*(_DWORD*)(v13 + 32) < v7)
			{
				v13 = *(_QWORD*)(v13 + 24);
			}
			else
			{
				v11 = v13;
				v13 = *(_QWORD*)(v13 + 16);
			}
		}
		if (v11 == v10 || v7 < *(_DWORD*)(v11 + 32))
		{
			v21 = *(_QWORD*)(v9 + 40i64 * *(unsigned int*)(*(_QWORD*)(a1 + 40) + 4i64 * v8) + 8);
			v14 = &v21;
		}
		else
		{
			v20 = v11;
			v14 = &v20;
		}
		v15 = *v14;
		if (v7)
		{
			if (v15 != v10)
				break;
			for (i = v10; v12; v12 = *(_QWORD*)(v12 + 16))
				i = v12;
			if (i == v10 || *(_DWORD*)(i + 32))
			{
				v19 = v10;
				v17 = &v19;
			}
			else
			{
				v22 = i;
				v17 = &v22;
			}
			v15 = *v17;
		}
		if (v15 != v10)
			break;
		if (++v8 >= (unsigned __int64)((*(_QWORD*)(a1 + 16) - v9) / 40))
			v8 = 0;
	LABEL_31:
		if (v8 == *(_DWORD*)(a1 + 64))
			return 0i64;
	}
	v18 = *(unsigned int*)(*(_QWORD*)(v15 + 40) + 16i64);
	if ((_DWORD)v18
		&& !(*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD, __int64))(*(_QWORD*)qword_140C659A0 + 24i64))(
			qword_140C659A0,
			v6,
			v18,
			a2,
			0i64,
			0,
			v19))
	{
		if (++v8 >= (unsigned __int64)((*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) / 40i64))
			v8 = 0;
		goto LABEL_31;
	}
	*(_DWORD*)(a1 + 64) = v8 + 1;
	return *(unsigned int*)(*(_QWORD*)(v15 + 40) + 12i64);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

