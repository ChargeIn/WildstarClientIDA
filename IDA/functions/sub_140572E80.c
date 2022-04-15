//----- (0000000140572E80) ----------------------------------------------------
__int64 __fastcall sub_140572E80(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // r11
	__int64 v4; // r10
	__int64 v5; // rax
	int v6; // r9d
	bool v7; // cl
	int v8; // eax
	bool v9; // al
	__int64 v11; // [rsp+8h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 48);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		v6 = *(_DWORD*)(v5 + 32);
		if (v6 == a3)
			v7 = *(_DWORD*)(v5 + 36) < a2;
		else
			v7 = v6 < a3;
		if (v7)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3
		|| ((v8 = *(_DWORD*)(v4 + 32), a3 == v8) ? (v9 = a2 < *(_DWORD*)(v4 + 36)) : (v9 = a3 < v8), v11 = v4, v9))
	{
		v11 = v3;
	}
	if (v11 == v3)
		return 0i64;
	else
		return *(_QWORD*)(v11 + 40);
}

