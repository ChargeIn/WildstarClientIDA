//----- (00000001403F8F50) ----------------------------------------------------
void __fastcall sub_1403F8F50(__int64 a1)
{
	_QWORD* v1; // rax
	int v2; // r12d
	_QWORD* v4; // rsi
	__int64 v5; // rcx
	_DWORD* v6; // r15
	_QWORD** v7; // rdi
	_QWORD* v8; // rbx
	_QWORD* v9; // r14
	_QWORD* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	_QWORD** v16; // rdi
	_QWORD* v17; // rbx
	_QWORD* v18; // r14
	_QWORD* v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rcx

	v1 = *(_QWORD**)(a1 + 32160);
	v2 = dword_140C636A8;
	v4 = (_QWORD*)*v1;
	if ((_QWORD*)*v1 != v1)
	{
		do
		{
			v5 = v4[10];
			v6 = v4 + 2;
			v4 = (_QWORD*)*v4;
			if (v5)
			{
				if ((int)(v2 - *v6 - (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 48i64))(v5)) > 0)
				{
					v16 = *(_QWORD***)(a1 + 32160);
					v17 = *v16;
					if (*v16 != v16)
					{
						do
						{
							v18 = (_QWORD*)*v17;
							if (v17 + 2 == (_QWORD*)v6)
							{
								v19 = (_QWORD*)v17[1];
								v20 = qword_140C65898;
								*v19 = v18;
								v18[1] = v19;
								if (v20)
								{
									v21 = *(_QWORD*)(v20 + 29504);
									if (v21)
										sub_1400EA3E0(v21, "MessageFinished", byte_1409EB834, v17 + 2);
								}
								v22 = v17[9];
								if (v22)
								{
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
									v17[9] = 0i64;
								}
								v23 = v17[10];
								if (v23)
								{
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
									v17[10] = 0i64;
								}
								v24 = v17[4];
								if (v24)
									sub_14018B900(v24, 0);
								sub_14018B900((__int64)v17, 0);
							}
							v17 = v18;
						} while (v18 != v16);
					}
				}
			}
			else
			{
				v7 = *(_QWORD***)(a1 + 32160);
				v8 = *v7;
				if (*v7 != v7)
				{
					do
					{
						v9 = (_QWORD*)*v8;
						if (v8 + 2 == (_QWORD*)v6)
						{
							v10 = (_QWORD*)v8[1];
							v11 = qword_140C65898;
							*v10 = v9;
							v9[1] = v10;
							if (v11)
							{
								v12 = *(_QWORD*)(v11 + 29504);
								if (v12)
									sub_1400EA3E0(v12, "MessageFinished", byte_1409EB834, v8 + 2);
							}
							v13 = v8[9];
							if (v13)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
								v8[9] = 0i64;
							}
							v14 = v8[10];
							if (v14)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
								v8[10] = 0i64;
							}
							v15 = v8[4];
							if (v15)
								sub_14018B900(v15, 0);
							sub_14018B900((__int64)v8, 0);
						}
						v8 = v9;
					} while (v9 != v7);
				}
			}
		} while (v4 != *(_QWORD**)(a1 + 32160));
	}
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

