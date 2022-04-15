//----- (0000000140331490) ----------------------------------------------------
__int64 __fastcall sub_140331490(__int64 a1, unsigned __int64* a2)
{
	_QWORD* v2; // r9
	unsigned __int64 v3; // r8
	_QWORD* v4; // rax
	_QWORD* v5; // rdx
	_QWORD* v7; // [rsp+8h] [rbp+8h]

	v2 = *(_QWORD**)(a1 + 216);
	v3 = *a2;
	v4 = (_QWORD*)v2[1];
	v5 = v2;
	while (v4)
	{
		if (v4[4] < v3)
		{
			v4 = (_QWORD*)v4[3];
		}
		else
		{
			v5 = v4;
			v4 = (_QWORD*)v4[2];
		}
	}
	if (v5 == v2 || (v7 = v5, v3 < v5[4]))
		v7 = *(_QWORD**)(a1 + 216);
	if (v7 == v2)
		return 0xFFFFFFFFi64;
	else
		return *((unsigned int*)v7 + 10);
}

