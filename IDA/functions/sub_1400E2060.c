//----- (00000001400E2060) ----------------------------------------------------
int* __fastcall sub_1400E2060(__int64 a1, unsigned __int64 a2, __int64 a3)
{
	__int64 v3; // r10
	__int64 v5; // r9
	_QWORD* v6; // rcx
	_QWORD* v7; // rax
	int* result; // rax
	unsigned __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
	int* v10; // [rsp+40h] [rbp+8h] BYREF
	int* v11; // [rsp+50h] [rbp+18h] BYREF

	v3 = a1 + 728;
	v5 = *(_QWORD*)(a1 + 736);
	v6 = *(_QWORD**)(v5 + 8);
	v7 = v6;
	while (v7)
	{
		if (v7[4] < a2)
			v7 = (_QWORD*)v7[3];
		else
			v7 = (_QWORD*)v7[2];
	}
	result = (int*)v5;
	while (v6)
	{
		if (v6[4] < a2)
		{
			v6 = (_QWORD*)v6[3];
		}
		else
		{
			result = (int*)v6;
			v6 = (_QWORD*)v6[2];
		}
	}
	if (result == (int*)v5 || a2 < *((_QWORD*)result + 4))
	{
		v9[0] = a2;
		v9[1] = 0i64;
		v10 = result;
		sub_1400EDD00(v3, &v11, (_QWORD**)&v10, v9);
		result = v11;
	}
	*((_QWORD*)result + 5) = a3;
	return result;
}

