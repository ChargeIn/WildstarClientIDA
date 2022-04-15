//----- (0000000140883CD0) ----------------------------------------------------
void __fastcall sub_140883CD0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
	v4 = *(_QWORD*)(a1 + 120);
	if (v4)
	{
		*(_QWORD*)(a2 + 24) = v4;
		*(_QWORD*)(a1 + 120) = a2;
	}
	else
	{
		*(_QWORD*)(a1 + 120) = a2;
		*(_QWORD*)(a2 + 24) = 0i64;
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
}

