//----- (00000001400E16B0) ----------------------------------------------------
void __fastcall sub_1400E16B0(__int64* a1, __int64* a2, const __m128i* a3, const __m128i* a4)
{
	__int64* v6; // rbx
	char* v7; // rsi
	__int64 v9; // rdi
	__int64 v10; // rax

	if (a2)
	{
		v6 = a2;
		v7 = (char*)((char*)a1 - (char*)a2);
		v9 = 4i64;
		do
		{
			if (*v6)
			{
				v10 = (__int64)sub_14018B280(144i64, 0);
				if (v10)
					v10 = sub_140152BF0(v10, *a1, *v6, a3, a4);
				*(__int64*)((char*)v6 + (_QWORD)v7 + 32) = v10;
			}
			++v6;
			--v9;
		} while (v9);
	}
}

