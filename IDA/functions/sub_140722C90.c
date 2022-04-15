//----- (0000000140722C90) ----------------------------------------------------
__int64* __fastcall sub_140722C90(__int64 a1, __int64 a2)
{
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int v5; // ecx
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64* result; // rax
	_QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
	char v11[24]; // [rsp+30h] [rbp-18h] BYREF
	__int64 v12; // [rsp+58h] [rbp+10h] BYREF

	v3 = sub_140723600(a1, a2);
	v4 = sub_140211280(*(_DWORD*)(a2 + 12));
	if (v4)
		v5 = *(_DWORD*)(v4 + 16);
	else
		v5 = 0;
	v6 = *(_QWORD*)(v3 + 8);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < v5)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v12 = v7, v5 < *(_DWORD*)(v7 + 32)))
		v12 = v6;
	result = &v12;
	if (v12 == v6)
	{
		LODWORD(v10[0]) = v5;
		v10[1] = a2;
		return (__int64*)sub_140055F80(v3, (__int64)v11, v10);
	}
	return result;
}
// 140722C90: using guessed type char var_18[24];

