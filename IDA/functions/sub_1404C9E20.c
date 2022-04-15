//----- (00000001404C9E20) ----------------------------------------------------
__int64 __fastcall sub_1404C9E20(__int64 a1, int a2, unsigned __int64 a3)
{
	__int64 v3; // rsi
	__int64 v5; // rcx
	__int64* v7; // r9
	__int64* v8; // r10
	__int64 v9; // rax
	__int64 result; // rax
	__int64 v11; // r15
	unsigned int v12; // eax
	__int64 i; // rbp
	__int64 v14; // rdx
	__int64 v15; // rcx
	unsigned __int64 v16; // rdi
	_QWORD* v17; // rbx
	_QWORD* v18; // rbx
	unsigned __int64 v19; // rdi
	_QWORD* v20; // rbx
	__int64 v21; // rdx
	__int64 v22; // r8
	__int64 v23; // rcx
	_QWORD* v24; // rax
	__int64* v25; // rax
	__int64 v26; // rax
	__int64 v27; // [rsp+20h] [rbp-38h] BYREF
	__int64 v28; // [rsp+60h] [rbp+8h] BYREF
	__int64 v29; // [rsp+78h] [rbp+20h] BYREF

	v28 = a1;
	v3 = qword_140C659F8;
	v5 = *(_QWORD*)(qword_140C659F0 + 824);
	v7 = *(__int64**)(v5 + 16);
	v8 = *(__int64**)(v5 + 24);
	if (v7 == v8)
		return 0i64;
	while (1)
	{
		v9 = *v7;
		if (*(_DWORD*)(*v7 + 188) == a2)
			break;
		if (++v7 == v8)
			return 0i64;
	}
	v11 = *v7;
	if (!v9)
		return 0i64;
	v12 = *(_DWORD*)(v9 + 272);
	for (i = 0i64; (unsigned int)i < v12; i = (unsigned int)(i + 1))
	{
		v14 = *(_QWORD*)(v11 + 232);
		if (v14 && (unsigned int)i < v12)
			v15 = v14 + 192 * i;
		else
			v15 = 0i64;
		LODWORD(v28) = *(_DWORD*)(v15 + 4);
		v16 = (*(__int64(__fastcall**)(__int64*))(v3 + 56))(&v28);
		v17 = *(_QWORD**)(*(_QWORD*)(v3 + 48) + 8 * (v16 % *(_QWORD*)(v3 + 40)));
		if (!v17)
			goto LABEL_17;
		while (v16 != *v17 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v3 + 64))(&v28, v17 + 2))
		{
			v17 = (_QWORD*)v17[1];
			if (!v17)
				goto LABEL_17;
		}
		v18 = v17 + 3;
		if (!v18)
		{
		LABEL_17:
			v19 = (*(__int64(__fastcall**)(__int64*))(v3 + 96))(&v28);
			v20 = *(_QWORD**)(*(_QWORD*)(v3 + 88) + 8 * (v19 % *(_QWORD*)(v3 + 80)));
			if (!v20)
				goto LABEL_35;
			while (v19 != *v20 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v3 + 104))(&v28, v20 + 2))
			{
				v20 = (_QWORD*)v20[1];
				if (!v20)
					goto LABEL_35;
			}
			v18 = v20 + 3;
			if (!v18)
				goto LABEL_35;
		}
		v21 = *v18;
		v22 = *(_QWORD*)(*v18 + 56i64);
		v23 = v22;
		v24 = *(_QWORD**)(v22 + 8);
		while (v24)
		{
			if (v24[4] < a3)
			{
				v24 = (_QWORD*)v24[3];
			}
			else
			{
				v23 = (__int64)v24;
				v24 = (_QWORD*)v24[2];
			}
		}
		if (v23 == v22 || a3 < *(_QWORD*)(v23 + 32))
		{
			v27 = *(_QWORD*)(*v18 + 56i64);
			v25 = &v27;
		}
		else
		{
			v29 = v23;
			v25 = &v29;
		}
		v26 = *v25;
		if (v26 != v22)
		{
			result = *(_QWORD*)(v26 + 40);
			if (result)
			{
				if (*(_DWORD*)(v21 + 20) == a2)
					return result;
			}
		}
	LABEL_35:
		v12 = *(_DWORD*)(v11 + 272);
	}
	return 0i64;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;

