//----- (0000000140341430) ----------------------------------------------------
__int64 sub_140341430()
{
	unsigned int v0; // edx
	__int64* v1; // rbx
	__int64* v2; // rdi
	__int64* v3; // rcx
	__int128* v4; // rdx
	__int64 v5; // rax
	__int128 v6; // xmm0
	__int64* v7; // r8
	__int64 result; // rax

	v0 = dword_140C42DE8;
	if ((unsigned int)dword_140C42DE8 >= 0xFF)
	{
		v0 = 0;
		v1 = (__int64*)qword_140C42E00;
		dword_140C42DE8 = 0;
		if (qword_140C42E00)
		{
			v2 = &qword_140C42E00;
			v3 = &qword_140C42E00;
			v4 = (__int128*)qword_140C42E00;
			if ((((unsigned __int8)&qword_140C42E00 | (unsigned __int8)qword_140C42E00) & 0xF) != 0)
			{
				sub_1407DB590((int*)&qword_140C42E00, (int*)qword_140C42E00, 0x800ui64);
			}
			else
			{
				v5 = 16i64;
				do
				{
					v6 = *v4;
					v3 += 16;
					v4 += 8;
					*((_OWORD*)v3 - 8) = v6;
					*((_OWORD*)v3 - 7) = *(v4 - 7);
					*((_OWORD*)v3 - 6) = *(v4 - 6);
					*((_OWORD*)v3 - 5) = *(v4 - 5);
					*((_OWORD*)v3 - 4) = *(v4 - 4);
					*((_OWORD*)v3 - 3) = *(v4 - 3);
					*((_OWORD*)v3 - 2) = *(v4 - 2);
					*((_OWORD*)v3 - 1) = *(v4 - 1);
					--v5;
				} while (v5);
			}
			if (off_140C42DF8 != v1)
				v2 = off_140C42DF8;
			off_140C42DF8 = v2;
			sub_14018B900((__int64)v1, 0);
			v0 = dword_140C42DE8;
		}
	}
	v7 = (__int64*)((char*)&unk_140C42E08 + 8 * v0);
	if (&off_140C42DF8[HIDWORD(qword_140C42DE0) + 1] == v7)
	{
		result = qword_140C42DF0;
		do
		{
			do
				++result;
			while (!result);
		} while (result == -1);
		qword_140C42DF0 = result;
		*(__int64*)((char*)&qword_140C42DE0 + 4) = 0i64;
	}
	else
	{
		result = *v7;
		dword_140C42DE8 = v0 + 1;
	}
	return result;
}
// 140C42DE0: using guessed type __int64 qword_140C42DE0;
// 140C42DE8: using guessed type int dword_140C42DE8;
// 140C42DF0: using guessed type __int64 qword_140C42DF0;
// 140C42DF8: using guessed type __int64 *off_140C42DF8;
// 140C42E00: using guessed type __int64 qword_140C42E00;

