//----- (00000001400E2100) ----------------------------------------------------
char __fastcall sub_1400E2100(__int64 a1, unsigned __int64 a2, __int64 a3)
{
	__int64 v3; // r9
	_QWORD* v4; // r11
	__int64 v5; // rcx
	_QWORD* v6; // rax
	__int64* v7; // rax
	__int64 v8; // rax
	__int64 v10; // [rsp+10h] [rbp+10h] BYREF
	__int64 v11; // [rsp+18h] [rbp+18h] BYREF

	if (a2 == a3)
		return 1;
	v3 = *(_QWORD*)(a1 + 736);
	v4 = *(_QWORD**)(v3 + 8);
	while (1)
	{
		v5 = v3;
		v6 = v4;
		if (!v4)
			goto LABEL_11;
		do
		{
			if (v6[4] < a2)
			{
				v6 = (_QWORD*)v6[3];
			}
			else
			{
				v5 = (__int64)v6;
				v6 = (_QWORD*)v6[2];
			}
		} while (v6);
		if (v5 == v3 || a2 < *(_QWORD*)(v5 + 32))
		{
		LABEL_11:
			v11 = v3;
			v7 = &v11;
		}
		else
		{
			v10 = v5;
			v7 = &v10;
		}
		v8 = *v7;
		if (v8 == v3)
			return 0;
		a2 = *(_QWORD*)(v8 + 40);
		if (a2 == a3)
			return 1;
	}
}

