//----- (000000014083B790) ----------------------------------------------------
__int64 __fastcall sub_14083B790(__int64 a1)
{
	HANDLE EventW; // rcx
	__int64 result; // rax
	_QWORD* v4; // rcx
	__int64 v5; // rdx

	EventW = CreateEventW(0i64, 1, 0, 0i64);
	*(_QWORD*)(a1 + 296) = EventW;
	result = 2 - (unsigned int)(EventW != 0i64);
	if ((_DWORD)result == 1)
	{
		SetEvent(EventW);
		v4 = (_QWORD*)a1;
		v5 = 3i64;
		*(_DWORD*)(a1 + 248) = 0;
		do
		{
			*v4 = 0i64;
			v4[1] = 0i64;
			v4[2] = 0i64;
			v4 += 8;
			*(v4 - 5) = 0i64;
			*(v4 - 4) = 0i64;
			*(v4 - 3) = 0i64;
			*(v4 - 2) = 0i64;
			*(v4 - 1) = 0i64;
			--v5;
		} while (v5);
		*v4 = 0i64;
		v4[1] = 0i64;
		v4[2] = 0i64;
		v4[3] = 0i64;
		v4[4] = 0i64;
		v4[5] = 0i64;
		v4[6] = 0i64;
		result = 1i64;
		qword_140C61B88 = a1 + 304;
	}
	return result;
}
// 140C61B88: using guessed type __int64 qword_140C61B88;

