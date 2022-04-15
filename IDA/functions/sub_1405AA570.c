//----- (00000001405AA570) ----------------------------------------------------
int* __fastcall sub_1405AA570(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	__int128* v5; // r8
	__int64 v6; // rax
	__int128 v7; // xmm0
	int* result; // rax

	sub_14018B900(*(_QWORD*)(a1 + 56), 0);
	v4 = a1 + 8;
	v5 = (__int128*)a2;
	if ((((unsigned __int8)(a1 + 8) | (unsigned __int8)a2) & 0xF) != 0)
	{
		sub_1407DB590((int*)v4, (int*)a2, 0xB0ui64);
	}
	else
	{
		v6 = 1i64;
		do
		{
			v7 = *v5;
			v4 += 128i64;
			v5 += 8;
			*(_OWORD*)(v4 - 128) = v7;
			*(_OWORD*)(v4 - 112) = *(v5 - 7);
			*(_OWORD*)(v4 - 96) = *(v5 - 6);
			*(_OWORD*)(v4 - 80) = *(v5 - 5);
			*(_OWORD*)(v4 - 64) = *(v5 - 4);
			*(_OWORD*)(v4 - 48) = *(v5 - 3);
			*(_OWORD*)(v4 - 32) = *(v5 - 2);
			*(_OWORD*)(v4 - 16) = *(v5 - 1);
			--v6;
		} while (v6);
		*(_OWORD*)v4 = *v5;
		*(_OWORD*)(v4 + 16) = v5[1];
		*(_OWORD*)(v4 + 32) = v5[2];
	}
	result = sub_14018E9C0(*(int**)(a2 + 48));
	*(_QWORD*)(a1 + 56) = result;
	return result;
}

