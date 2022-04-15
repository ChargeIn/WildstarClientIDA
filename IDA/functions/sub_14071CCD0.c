//----- (000000014071CCD0) ----------------------------------------------------
__int64 __fastcall sub_14071CCD0(__int64* a1)
{
	__int64 v1; // rax
	__int64 v3; // rax
	__int64 v5; // rax

	v1 = *a1;
	if (*((_DWORD*)a1 + 141))
	{
		v3 = (*(__int64 (**)(void))(v1 + 136))();
		if (v3)
			return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v3 + 112i64))(
				v3,
				*((unsigned int*)a1 + 141),
				*((unsigned int*)a1 + 142));
		return 0i64;
	}
	v5 = (*(__int64 (**)(void))(v1 + 128))();
	if (!v5)
		return 0i64;
	if (*(_DWORD*)(v5 + 128) == 18)
		return *(_QWORD*)(v5 + 13976);
	else
		return *(_QWORD*)(v5 + 5864);
}

