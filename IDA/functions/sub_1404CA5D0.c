//----- (00000001404CA5D0) ----------------------------------------------------
void __fastcall sub_1404CA5D0(__int64 a1, int a2)
{
	__int64* v2; // rbx
	int* v5; // rsi
	__int64 v6; // rax
	__int64 v7; // rbp
	int* v8; // r8

	v2 = *(__int64**)(a1 + 8);
	if (v2 != *(__int64**)(a1 + 16))
	{
		v5 = (int*)(v2 + 1);
		do
		{
			v6 = *v2;
			if (*(_DWORD*)*v2 == a2)
			{
				if (*(_DWORD*)(v6 + 4) == 1)
				{
					v7 = *(_QWORD*)(v6 + 8);
					if (v7)
					{
						sub_1404B5280(*(_QWORD**)(v6 + 8));
						sub_14018B900(v7, 0);
					}
				}
				sub_14018B900(*v2, 0);
				v8 = *(int**)(a1 + 16);
				if (v5 != v8)
					sub_1407DB590((int*)v2, v5, ((char*)v8 - (char*)v5) & 0xFFFFFFFFFFFFFFF8ui64);
				*(_QWORD*)(a1 + 16) -= 8i64;
			}
			else
			{
				++v2;
				v5 += 2;
			}
		} while (v2 != *(__int64**)(a1 + 16));
	}
}

