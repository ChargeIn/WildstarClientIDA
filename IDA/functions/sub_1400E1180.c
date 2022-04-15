//----- (00000001400E1180) ----------------------------------------------------
bool __fastcall sub_1400E1180(__int64 a1, __int64 a2)
{
	unsigned __int64* v2; // r9
	__int64 v3; // rdi
	__int64 v4; // rdx
	__int64 v5; // rbx
	__int64* v6; // r8
	int v7; // ecx
	bool v8; // sf
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF
	__int64 v11; // [rsp+38h] [rbp+10h] BYREF

	v2 = *(unsigned __int64**)(a1 + 8);
	v3 = *(_QWORD*)(a2 + 16) - *(_QWORD*)(a2 + 8);
	v4 = *(_QWORD*)(a2 + 8);
	v5 = *(_QWORD*)(a1 + 16) - (_QWORD)v2;
	v6 = &v10;
	if (v3 >= v5)
		v6 = &v11;
	v11 = *(_QWORD*)(a1 + 16) - (_QWORD)v2;
	v10 = v3;
	v7 = sub_1407E6AF0(v2, v4, *v6);
	v8 = v7 < 0;
	if (!v7)
		return v5 < v3;
	return v8;
}

