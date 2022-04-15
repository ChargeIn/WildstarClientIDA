//----- (00000001400585E0) ----------------------------------------------------
__int64 __fastcall sub_1400585E0(__int64 a1, int a2)
{
	__int64* v2; // rax
	__int64 v3; // r10
	__int64* v4; // rbx

	v2 = (__int64*)sub_1400580E0(a1, a2);
	v4 = v2;
	switch (*((_DWORD*)v2 + 2))
	{
	case 3:
		if ((unsigned int)sub_14005E620(v3, (__int64)v2))
			return *(_QWORD*)(*v4 + 16);
		break;
	case 4:
		return *(_QWORD*)(*v2 + 16);
	case 5:
		return (int)sub_14005C8E0(*v2);
	case 7:
		return *(_QWORD*)(*v2 + 32);
	}
	return 0i64;
}
// 14005863B: variable 'v3' is possibly undefined

