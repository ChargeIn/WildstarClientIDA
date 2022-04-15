//----- (000000014019D520) ----------------------------------------------------
int* __fastcall sub_14019D520(__int64 a1, __int64* a2)
{
	__int64 v2; // rbp
	_QWORD* v3; // rdi
	__int64 v6; // rbx
	unsigned __int16* v7; // rsi
	__int64 v9; // rax
	__int64 v10[2]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v11; // [rsp+60h] [rbp+8h] BYREF
	int* v12; // [rsp+70h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *(_QWORD**)(v2 + 8);
	v6 = v2;
	if (v3)
	{
		v7 = (unsigned __int16*)*a2;
		do
		{
			if ((int)sub_14018E2C0(v3[4], v7) < 0)
			{
				v3 = (_QWORD*)v3[3];
			}
			else
			{
				v6 = (__int64)v3;
				v3 = (_QWORD*)v3[2];
			}
		} while (v3);
	}
	if (v6 != v2 && (int)sub_14018E2C0(*a2, *(unsigned __int16**)(v6 + 32)) >= 0)
		return (int*)(v6 + 40);
	v9 = *a2;
	v10[1] = 0i64;
	v10[0] = v9;
	v11 = v6;
	sub_140144990(a1, &v12, &v11, v10);
	return v12 + 10;
}

