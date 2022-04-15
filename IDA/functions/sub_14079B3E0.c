//----- (000000014079B3E0) ----------------------------------------------------
void __fastcall sub_14079B3E0(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rbx
	__int64 v3; // rax
	_QWORD* v4; // rsi
	__int64 v5; // rdi
	__int64 v6; // rbp
	__int64 v7; // rsi
	__int64 v8; // rsi
	__int64 v9; // rdi
	_QWORD* v10; // [rsp+20h] [rbp-38h]
	_QWORD* v12; // [rsp+68h] [rbp+10h]
	__int64 v13; // [rsp+78h] [rbp+20h]

	if (a2)
	{
		v12 = a2;
		v2 = a2;
		v3 = a1;
		do
		{
			sub_14079B3E0(v3, v2[3]);
			v4 = (_QWORD*)v2[2];
			v5 = (__int64)(v2 + 5);
			v10 = v4;
			if (v2[7])
			{
				v6 = *(_QWORD*)(v2[6] + 8i64);
				if (v6)
				{
					do
					{
						sub_140032150(v5, *(_QWORD**)(v6 + 24));
						v7 = *(_QWORD*)(v6 + 16);
						v13 = v7;
						if (*(_QWORD*)(v6 + 56))
						{
							v8 = *(_QWORD*)(*(_QWORD*)(v6 + 48) + 8i64);
							if (v8)
							{
								do
								{
									sub_1400083B0(v6 + 40, *(_QWORD*)(v8 + 24));
									v9 = *(_QWORD*)(v8 + 16);
									sub_14018B900(v8, 0);
									v8 = v9;
								} while (v9);
								v5 = (__int64)(v2 + 5);
							}
							v7 = v13;
							*(_QWORD*)(*(_QWORD*)(v6 + 48) + 16i64) = *(_QWORD*)(v6 + 48);
							*(_QWORD*)(*(_QWORD*)(v6 + 48) + 8i64) = 0i64;
							*(_QWORD*)(*(_QWORD*)(v6 + 48) + 24i64) = *(_QWORD*)(v6 + 48);
							*(_QWORD*)(v6 + 56) = 0i64;
						}
						sub_14018B900(*(_QWORD*)(v6 + 48), 0);
						sub_14018B900(v6, 0);
						v6 = v7;
					} while (v7);
					v2 = v12;
					v4 = v10;
				}
				*(_QWORD*)(*(_QWORD*)(v5 + 8) + 16i64) = *(_QWORD*)(v5 + 8);
				*(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64) = 0i64;
				*(_QWORD*)(*(_QWORD*)(v5 + 8) + 24i64) = *(_QWORD*)(v5 + 8);
				*(_QWORD*)(v5 + 16) = 0i64;
			}
			sub_14018B900(*(_QWORD*)(v5 + 8), 0);
			sub_14018B900((__int64)v2, 0);
			v3 = a1;
			v2 = v4;
			v12 = v4;
		} while (v4);
	}
}

