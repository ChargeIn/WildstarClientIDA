//----- (00000001403BABA0) ----------------------------------------------------
void __fastcall sub_1403BABA0(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	_QWORD* v4; // rax
	unsigned __int64 i; // rdi
	__int64 v6; // rsi
	__int64 v7; // rcx
	_QWORD* v8; // rdi
	__int64 v9; // rax
	_QWORD* j; // rax
	__int64 k; // rax

	v1 = *(_QWORD**)(a1 + 2728);
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = (_QWORD*)v3[5];
			for (i = 0i64; i < v4[1]; ++i)
			{
				v6 = *(_QWORD*)(*v4 + 8 * i);
				if (v6)
				{
					v7 = *(_QWORD*)(v6 + 24);
					if (v7)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
					sub_14018B900(v6, 0);
				}
				v4 = (_QWORD*)v3[5];
			}
			v8 = (_QWORD*)v3[5];
			if (v8)
			{
				if (*v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v8 - 16i64) + 8i64))(*v8 - 16i64);
				sub_14018B900((__int64)v8, 0);
			}
			v9 = v3[3];
			if (v9)
			{
				v3 = (_QWORD*)v3[3];
				for (j = *(_QWORD**)(v9 + 16); j; j = (_QWORD*)j[2])
					v3 = j;
			}
			else
			{
				for (k = v3[1]; v3 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
					v3 = (_QWORD*)k;
				if (v3[3] != k)
					v3 = (_QWORD*)k;
			}
		} while (v3 != *(_QWORD**)(a1 + 2728));
	}
	sub_140008410(a1 + 2720);
}

