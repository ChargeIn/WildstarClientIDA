//----- (00000001407BCC60) ----------------------------------------------------
void sub_1407BCC60()
{
	__int64 v0; // rax
	__int64 v1; // r8
	__int64 v2; // rbx
	unsigned __int64 v3; // rdx
	unsigned __int64 v4; // r10
	__int64 v5; // rcx
	__int64 v6; // r11
	int v7; // edx
	__int64 v8; // r9
	__int64 v9; // r8
	__int128* v10; // rax
	__int128 v11; // xmm0

	if (qword_140C7F898)
	{
		qword_140C7F898 = 0i64;
	}
	else
	{
		v0 = (__int64)sub_14018DB00(qword_140C7F890, 0i64, 64i64);
		v1 = qword_140C7F890;
		v2 = v0;
		if (qword_140C7F890 != v0)
		{
			v3 = qword_140C7F898;
			v4 = 0i64;
			if (qword_140C7F898)
			{
				v5 = v0;
				v6 = -v0;
				do
				{
					if (v5)
					{
						v7 = 2;
						v8 = v1 + v6 + v5;
						v9 = -(v1 + v6);
						v10 = (__int128*)v8;
						do
						{
							--v7;
							v11 = *v10++;
							*(__int128*)((char*)v10 + v9 - 16) = v11;
						} while (v7 >= 0);
						*(_DWORD*)(v5 + 48) = *(_DWORD*)(v8 + 48);
						v3 = qword_140C7F898;
						v1 = qword_140C7F890;
					}
					++v4;
					v5 += 64i64;
				} while (v4 < v3);
			}
			if (v1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v1 - 16) + 8i64))(v1 - 16);
			qword_140C7F890 = v2;
		}
		qword_140C7F898 = 0i64;
	}
}
// 140C7F890: using guessed type __int64 qword_140C7F890;
// 140C7F898: using guessed type __int64 qword_140C7F898;

