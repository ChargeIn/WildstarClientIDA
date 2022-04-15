//----- (00000001407E3E3C) ----------------------------------------------------
void __fastcall sub_1407E3E3C(__int64 a1, __int64 a2)
{
	*(_QWORD*)(a1 + 160) = &unk_14095E4B0;
	*(_DWORD*)(a1 + 16) = 0;
	*(_DWORD*)(a1 + 28) = 1;
	*(_DWORD*)(a1 + 200) = 1;
	*(_WORD*)(a1 + 356) = 67;
	*(_WORD*)(a1 + 618) = 67;
	*(_QWORD*)(a1 + 184) = &unk_140C0FD80;
	*(_QWORD*)(a1 + 1136) = 0i64;
	sub_1407E2340(13);
	_InterlockedIncrement(*(volatile signed __int32**)(a1 + 184));
	sub_1407E2528(13);
	sub_1407E2340(12);
	*(_QWORD*)(a1 + 192) = a2;
	if (!a2)
		*(_QWORD*)(a1 + 192) = off_140C102E0;
	sub_1407E6734(*(_QWORD*)(a1 + 192));
	sub_1407E2528(12);
}
// 140C102E0: using guessed type void *off_140C102E0;

