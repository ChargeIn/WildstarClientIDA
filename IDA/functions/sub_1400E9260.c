//----- (00000001400E9260) ----------------------------------------------------
void __fastcall sub_1400E9260(__int64 a1, __int64 a2)
{
	_QWORD** v2; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rcx
	_QWORD* v7; // rax
	_QWORD* v8; // rdi
	_QWORD** v9; // rax
	_QWORD* v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rdi
	_QWORD* v13; // rax
	_QWORD* v14; // rdi

	v2 = *(_QWORD***)(a1 + 120);
	if (*v2 != v2)
	{
		v5 = *v2;
		if (*v2 != v2)
		{
			do
			{
				v6 = v5[2];
				if (v6 == a2)
				{
					if (v6)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
					v7 = (_QWORD*)v5[1];
					v8 = (_QWORD*)*v5;
					*v7 = *v5;
					v8[1] = v7;
					sub_14018B900((__int64)v5, 0);
					v5 = v8;
				}
				v5 = (_QWORD*)*v5;
			} while (v5 != *(_QWORD**)(a1 + 120));
		}
	}
	v9 = *(_QWORD***)(a1 + 136);
	if (*v9 != v9)
	{
		v10 = *v9;
		if (*v9 != v9)
		{
			do
			{
				v11 = v10[2];
				v12 = v10[3];
				if (v11 == a2 || v12 == a2)
				{
					if (v11)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
					if (v12)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
					v13 = (_QWORD*)v10[1];
					v14 = (_QWORD*)*v10;
					*v13 = *v10;
					v14[1] = v13;
					sub_14018B900((__int64)v10, 0);
					v10 = v14;
				}
				v10 = (_QWORD*)*v10;
			} while (v10 != *(_QWORD**)(a1 + 136));
		}
	}
}

