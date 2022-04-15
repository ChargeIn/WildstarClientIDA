//----- (00000001405534B0) ----------------------------------------------------
__int64 __fastcall sub_1405534B0(__int64 a1)
{
	unsigned int v2; // edi
	__int64 v3; // rdx
	unsigned int v4; // ebx
	__int64 v5; // rbp
	int v6; // eax
	__int64 v7; // r8
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rbx
	__int64 v11; // rdx
	unsigned int v12; // ecx
	float v13; // xmm1_4
	__int64 v15; // [rsp+30h] [rbp+8h]

	v2 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 16i64);
	v3 = *(_QWORD*)(qword_140C65898 + 120);
	v4 = *(_DWORD*)(v3 + 60);
	if (!v4)
		v4 = *(_DWORD*)(v3 + 56);
	v5 = sub_14024DFC0(v2);
	if (!v5)
		return 0i64;
	v6 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65A10 + 16i64))(
		qword_140C65A10,
		v4,
		v2);
	if (v6 >= 10)
		return 0i64;
	v7 = *(_QWORD*)(qword_140C65A10 + 16);
	v8 = v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < v6)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == v7 || (v15 = v8, v6 < *(_DWORD*)(v8 + 32)))
		v15 = *(_QWORD*)(qword_140C65A10 + 16);
	if (v15 == v7)
		return 0i64;
	v10 = *(_QWORD*)(v15 + 40);
	if (!v10)
		return 0i64;
	v11 = sub_14022AEC0(*(_DWORD*)(*(_QWORD*)(a1 + 8) + 284i64));
	if (!v11)
		return 0i64;
	v12 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 64i64);
	v13 = (float)*(int*)(v5 + 8);
	if (!v12)
	{
		if (v13 != 0.0)
			return (unsigned int)(int)(float)((float)(v13 * *(float*)(v11 + 4)) * *(float*)(v10 + 8));
		return 0;
	}
	return v12;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A10: using guessed type __int64 qword_140C65A10;

