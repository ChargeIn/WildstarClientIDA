//----- (00000001408425E0) ----------------------------------------------------
void __fastcall sub_1408425E0(__int64 a1)
{
	_QWORD* v1; // rbx
	char v3; // di
	__int64 v4; // rdx

	v1 = *(_QWORD**)(a1 + 88);
	while (v1 != *(_QWORD**)(a1 + 96))
	{
		v3 = 1;
		EnterCriticalSection(&stru_140C61BB8);
		for (; v1 != *(_QWORD**)(a1 + 96); ++v3)
		{
			if (!v3)
				break;
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v1 + 16i64))(*v1);
			++v1;
		}
		LeaveCriticalSection(&stru_140C61BB8);
	}
	v4 = *(_QWORD*)(a1 + 88);
	if (v4)
	{
		*(_QWORD*)(a1 + 96) = v4;
		sub_140881720(dword_140C10F20, v4);
		*(_QWORD*)(a1 + 88) = 0i64;
		*(_QWORD*)(a1 + 96) = 0i64;
		*(_DWORD*)(a1 + 104) = 0;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;

