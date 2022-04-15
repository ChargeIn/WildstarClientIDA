//----- (000000014004DC10) ----------------------------------------------------
void __fastcall sub_14004DC10(__int64 a1, __int64* a2)
{
	_QWORD* v2; // rax
	_QWORD* v4; // r8
	_QWORD* v6; // rbx
	_QWORD* v7; // rax
	_QWORD* i; // rax
	__int64 v9; // rcx
	_QWORD* v10; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD**)(a1 + 416);
	v4 = (_QWORD*)v2[2];
	if (v4 != v2)
	{
		do
		{
			v6 = (_QWORD*)v4[3];
			v7 = v4;
			if (v6)
			{
				for (i = (_QWORD*)v6[2]; i; i = (_QWORD*)i[2])
					v6 = i;
			}
			else
			{
				v9 = v4[1];
				if (v4 == *(_QWORD**)(v9 + 24))
				{
					do
					{
						v7 = (_QWORD*)v9;
						v9 = *(_QWORD*)(v9 + 8);
					} while (v7 == *(_QWORD**)(v9 + 24));
				}
				v6 = v7;
				if (v7[3] != v9)
					v6 = (_QWORD*)v9;
			}
			if ((__int64*)v4[5] == a2)
			{
				v10 = v4;
				sub_14004F2F0(a1 + 408, (__int64*)&v10);
			}
			v4 = v6;
		} while (v6 != *(_QWORD**)(a1 + 416));
	}
	if (a2)
	{
		sub_1400485E0(a2);
		sub_14018B900((__int64)a2, 0);
	}
}

