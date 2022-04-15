//----- (000000014056CFF0) ----------------------------------------------------
__int64 __fastcall sub_14056CFF0(__int64 a1, unsigned int a2, unsigned int* a3, unsigned int a4, _DWORD* a5)
{
	__int64 v7; // r11
	__int64 v9; // rax
	__int64 v10; // r10
	__int64 v11; // rdi
	int v12; // ebx
	int v13; // eax
	__int64 v15; // [rsp+40h] [rbp-18h]

	v7 = *(_QWORD*)(qword_140C65928 + 8);
	v9 = *(_QWORD*)(v7 + 8);
	v10 = v7;
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < a2)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v10 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v10 == v7 || (v15 = v10, a2 < *(_DWORD*)(v10 + 32)))
		v15 = *(_QWORD*)(qword_140C65928 + 8);
	if (v15 == v7)
		return 0i64;
	v11 = *(_QWORD*)(v15 + 40);
	if (!v11)
		return 0i64;
	v12 = (*(__int64 (**)(void))(*(_QWORD*)a1 + 208i64))() != 3;
	v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 64i64))(a1);
	return sub_140487E40(v11, v13, a3, a4, v12, 0, a5);
}
// 140C65928: using guessed type __int64 qword_140C65928;

