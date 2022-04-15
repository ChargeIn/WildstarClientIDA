//----- (00000001408605D0) ----------------------------------------------------
void __fastcall sub_1408605D0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // rdx

	v1 = qword_140C61FE0;
	if (qword_140C61FE0 && sub_1408462D0(qword_140C61FE0))
	{
		if (!*(_QWORD*)(a1 + 496)
			&& ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 160) + 528i64))(*(_QWORD*)(a1 + 160))
				|| *(char*)(a1 + 382) < 0))
		{
			*(_QWORD*)(a1 + 496) = sub_140870690(
				*(unsigned __int8*)(v1 + 137),
				*(_DWORD*)(a1 + 196) & 0x3FFFF,
				*(_BYTE*)(a1 + 379) & 3,
				(*(unsigned __int8*)(a1 + 379) >> 2) & 3);
		}
		v3 = *(_QWORD*)(a1 + 496);
		if (v3)
			(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, char))(**(_QWORD**)(a1 + 160) + 512i64))(
				*(_QWORD*)(a1 + 160),
				v3,
				*(_QWORD*)(a1 + 168),
				*(_QWORD*)(a1 + 176),
				1);
		*(_BYTE*)(a1 + 382) |= 0x40u;
	}
}
// 140C61FE0: using guessed type __int64 qword_140C61FE0;

