//----- (00000001400ED790) ----------------------------------------------------
__int64 __fastcall sub_1400ED790(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	unsigned __int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rcx
	_QWORD* v7; // rax
	__int64* v8; // rax
	_QWORD** v9; // rax
	_QWORD* v10; // rbx
	__int64 v11; // rcx
	__int64 result; // rax
	__int64 v13; // [rsp+30h] [rbp+8h] BYREF
	__int64 v14; // [rsp+38h] [rbp+10h] BYREF
	__int64 v15; // [rsp+40h] [rbp+18h] BYREF

	v1 = *(_QWORD**)(a1 + 2640);
	v3 = (_QWORD*)*v1;
	if ((_QWORD*)*v1 != v1)
	{
		do
		{
			v4 = v3[2];
			v5 = *(_QWORD*)(qword_140C63650 + 736);
			v6 = v5;
			v7 = *(_QWORD**)(v5 + 8);
			while (v7)
			{
				if (v7[4] < v4)
				{
					v7 = (_QWORD*)v7[3];
				}
				else
				{
					v6 = (__int64)v7;
					v7 = (_QWORD*)v7[2];
				}
			}
			if (v6 == v5 || v4 < *(_QWORD*)(v6 + 32))
			{
				v14 = *(_QWORD*)(qword_140C63650 + 736);
				v8 = &v14;
			}
			else
			{
				v13 = v6;
				v8 = &v13;
			}
			v15 = *v8;
			sub_1400EDF20(qword_140C63650 + 728, &v15);
			v3 = (_QWORD*)*v3;
		} while (v3 != *(_QWORD**)(a1 + 2640));
	}
	v9 = *(_QWORD***)(a1 + 2640);
	v10 = *v9;
	if (*v9 != v9)
	{
		do
		{
			v11 = (__int64)v10;
			v10 = (_QWORD*)*v10;
			sub_14018B900(v11, 0);
		} while (v10 != *(_QWORD**)(a1 + 2640));
	}
	**(_QWORD**)(a1 + 2640) = *(_QWORD*)(a1 + 2640);
	result = *(_QWORD*)(a1 + 2640);
	*(_QWORD*)(result + 8) = result;
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;

