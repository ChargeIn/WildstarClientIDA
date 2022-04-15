//----- (00000001407BC9B0) ----------------------------------------------------
void sub_1407BC9B0()
{
	int* v0; // rax
	__int64 v1; // r9
	__int64 v2; // rbx
	unsigned __int64 v3; // r8
	unsigned __int64 v4; // rdx
	int* v5; // rcx

	if (qword_140C7F868)
	{
		qword_140C7F868 = 0i64;
	}
	else
	{
		v0 = sub_14018DB00(qword_140C7F860, 0i64, 32i64);
		v1 = qword_140C7F860;
		v2 = (__int64)v0;
		if ((int*)qword_140C7F860 != v0)
		{
			v3 = qword_140C7F868;
			v4 = 0i64;
			if (qword_140C7F868)
			{
				v5 = v0;
				do
				{
					if (v5)
					{
						*(_OWORD*)v5 = *(_OWORD*)((char*)v5 - (char*)v0 + v1);
						*((_QWORD*)v5 + 2) = *(_QWORD*)((char*)v5 - (char*)v0 + v1 + 16);
						v3 = qword_140C7F868;
						v1 = qword_140C7F860;
					}
					++v4;
					v5 += 8;
				} while (v4 < v3);
			}
			if (v1)
				(*(void(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)(v1 - 16) + 8i64))(v1 - 16, v4);
			qword_140C7F860 = v2;
		}
		qword_140C7F868 = 0i64;
	}
}
// 140C7F860: using guessed type __int64 qword_140C7F860;
// 140C7F868: using guessed type __int64 qword_140C7F868;

