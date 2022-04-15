//----- (00000001408628E0) ----------------------------------------------------
char __fastcall sub_1408628E0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbx
	__int64* i; // rdi
	unsigned int v8; // r8d
	unsigned int v9; // edx
	__int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+50h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 16);
	if (v3 == *(_QWORD*)(a1 + 24))
		return 0;
	for (i = (__int64*)(v3 + 24); *i != a2; i += 4)
	{
	LABEL_12:
		v3 += 32i64;
		if (v3 == *(_QWORD*)(a1 + 24))
			return 0;
	}
	if (!(*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a3 + 32i64))(a3))
		return 1;
	v8 = *((_DWORD*)i - 1);
	v12 = 0i64;
	sub_14083ED20((struct _RTL_CRITICAL_SECTION*)qword_140C61B58, (__int64)v11, v8, (unsigned __int64*)&v12);
	if (!v11[0])
		return 1;
	if ((*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a3 + 40i64))(a3, v11[0], *(i - 2)) == 1)
	{
		if (*(i - 2))
		{
			v9 = *((_DWORD*)i - 1);
			if (v9 != -1)
			{
				sub_1408420F0((struct _RTL_CRITICAL_SECTION*)qword_140C61B58, v9);
				if (*i)
					sub_140841FE0(*i, 0);
			}
		}
		*(i - 2) = v11[0];
		*i = v12;
		goto LABEL_12;
	}
	if (v11[0])
	{
		sub_1408420F0((struct _RTL_CRITICAL_SECTION*)qword_140C61B58, *((_DWORD*)i - 1));
		if (v12)
			sub_140841FE0(v12, 0);
	}
	return 1;
}
// 140C61B58: using guessed type __int64 qword_140C61B58;
// 1408628E0: using guessed type __int64 var_28[5];

