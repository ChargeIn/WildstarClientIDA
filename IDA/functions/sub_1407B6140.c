//----- (00000001407B6140) ----------------------------------------------------
__int64 __fastcall sub_1407B6140(void(__fastcall*** a1)(_QWORD), int** a2)
{
	int* v4; // rax
	int* v5; // rbx
	int v6; // edi

	v4 = sub_14018B280(1232i64, 0);
	v5 = v4;
	if (v4)
	{
		*(_QWORD*)v4 = off_140B795F0;
		*((_QWORD*)v4 + 114) = 0i64;
		*((_QWORD*)v4 + 113) = 0i64;
		*((_QWORD*)v4 + 153) = 0i64;
		*((_QWORD*)v4 + 152) = 0i64;
		v4[2] = 1;
		*((_QWORD*)v4 + 2) = 0i64;
		v4[224] = 0;
		sub_1407E4830(v4 + 8, 0i64, 0xC0ui64);
		sub_1407E4830(v5 + 56, 0i64, 0x80ui64);
	}
	else
	{
		v5 = 0i64;
	}
	v6 = sub_1407B6280((__int64)v5, a1);
	if (v6 >= 0)
	{
		*a2 = v5;
		return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(int*))(*(_QWORD*)v5 + 8i64))(v5);
		return (unsigned int)v6;
	}
}
// 140B795F0: using guessed type __int64 (__fastcall *off_140B795F0[8])();

