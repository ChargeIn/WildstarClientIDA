//----- (00000001400DD350) ----------------------------------------------------
__int64 __fastcall sub_1400DD350(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64* v3; // rcx
	int v4; // eax
	unsigned int v5; // edx
	__int64 v6; // r9
	unsigned __int64 v7; // r8
	unsigned __int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rcx
	__int64 v13; // [rsp+20h] [rbp-18h] BYREF
	int v14; // [rsp+28h] [rbp-10h]
	__int64 v15; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_1400D66A0(a1, 1u);
	if (!v2)
		return 0i64;
	v3 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__int64*)(a1[3] + 16i64);
	v4 = *((_DWORD*)v3 + 2);
	if (v4 == 3)
		goto LABEL_8;
	if (v4 == 4 && sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v15))
	{
		v14 = 3;
		v3 = &v13;
		v13 = v15;
	LABEL_8:
		v5 = (int)*(double*)v3;
		goto LABEL_9;
	}
	v5 = 0;
LABEL_9:
	v6 = *(_QWORD*)(v2 + 344);
	if (v6)
	{
		v7 = *(_QWORD*)(v6 + 8);
		v8 = v7;
		v9 = *(_QWORD*)(v7 + 8);
		while (v9)
		{
			if (*(_DWORD*)(v9 + 32) < v5)
			{
				v9 = *(_QWORD*)(v9 + 24);
			}
			else
			{
				v8 = v9;
				v9 = *(_QWORD*)(v9 + 16);
			}
		}
		if (v8 == v7 || (v15 = v8, v5 < *(_DWORD*)(v8 + 32)))
			v15 = v7;
		if (v15 != v7)
		{
			v10 = *(_QWORD*)(v15 + 40);
			v11 = *(_QWORD*)(v10 + 184);
			if (v11)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
				*(_QWORD*)(v10 + 184) = 0i64;
			}
			*(_BYTE*)v10 = 0;
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

