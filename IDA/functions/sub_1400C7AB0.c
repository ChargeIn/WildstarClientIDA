//----- (00000001400C7AB0) ----------------------------------------------------
char __fastcall sub_1400C7AB0(_QWORD* a1)
{
	_QWORD** v1; // rax
	_QWORD* v3; // rdi
	_QWORD** v4; // rbx
	__int64 v5; // r14
	_QWORD* v6; // rcx
	_QWORD* v7; // rsi
	_QWORD* v8; // rax
	_QWORD** v9; // rbx
	_QWORD* v10; // rcx
	_QWORD* v11; // rsi
	_QWORD* v12; // rax
	_QWORD* v13; // rax
	_QWORD* v14; // rbx

	v1 = (_QWORD**)a1[74];
	v3 = *v1;
	if (*v1 != v1)
	{
		do
		{
			v4 = (_QWORD**)a1[70];
			v5 = v3[2];
			v6 = *v4;
			if (*v4 != v4)
			{
				do
				{
					v7 = (_QWORD*)*v6;
					if (v6[2] == v5)
					{
						v8 = (_QWORD*)v6[1];
						*v8 = v7;
						v7[1] = v8;
						sub_14018B900((__int64)v6, 0);
					}
					v6 = v7;
				} while (v7 != v4);
			}
			v9 = (_QWORD**)a1[72];
			v10 = *v9;
			if (*v9 != v9)
			{
				do
				{
					v11 = (_QWORD*)*v10;
					if (v10[2] == v5)
					{
						v12 = (_QWORD*)v10[1];
						*v12 = v11;
						v11[1] = v12;
						sub_14018B900((__int64)v10, 0);
					}
					v10 = v11;
				} while (v11 != v9);
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			v13 = (_QWORD*)v3[1];
			v14 = (_QWORD*)*v3;
			*v13 = *v3;
			v14[1] = v13;
			sub_14018B900((__int64)v3, 0);
			v3 = v14;
		} while (v14 != (_QWORD*)a1[74]);
		LOBYTE(v1) = sub_1400C7600((__int64)a1);
	}
	return (char)v1;
}

