//----- (00000001401933B0) ----------------------------------------------------
__int64 sub_1401933B0()
{
	unsigned int v0; // ebx
	HANDLE CurrentProcess; // r15
	void* v2; // rbp
	ACL* v3; // rdi
	signed int SecurityInfo; // eax
	bool v5; // cc
	int AclSize; // esi
	HLOCAL v7; // rax
	DWORD v8; // esi
	DWORD AclRevision; // r14d
	ACL* v10; // rax
	DWORD cbSid; // [rsp+70h] [rbp+8h] BYREF
	PACL ppDacl; // [rsp+78h] [rbp+10h] BYREF
	PSECURITY_DESCRIPTOR hMem; // [rsp+80h] [rbp+18h] BYREF

	v0 = 0;
	CurrentProcess = GetCurrentProcess();
	v2 = 0i64;
	ppDacl = 0i64;
	v3 = 0i64;
	hMem = 0i64;
	SecurityInfo = GetSecurityInfo(CurrentProcess, SE_KERNEL_OBJECT, 4u, 0i64, 0i64, &ppDacl, 0i64, &hMem);
	v5 = SecurityInfo <= 0;
	if (!SecurityInfo)
	{
		if (ppDacl)
			AclSize = ppDacl->AclSize;
		else
			AclSize = 8;
		cbSid = 68;
		v7 = LocalAlloc(0x40u, 0x44ui64);
		v2 = v7;
		if (v7
			&& CreateWellKnownSid(WinWorldSid, 0i64, v7, &cbSid)
			&& ((v8 = (cbSid + 11 + AclSize) & 0xFFFFFFFC, !ppDacl) ? (AclRevision = 2) : (AclRevision = ppDacl->AclRevision),
				(v10 = (ACL*)LocalAlloc(0x40u, v8), (v3 = v10) != 0i64)
				&& InitializeAcl(v10, v8, AclRevision)
				&& AddAccessDeniedAce(v3, v3->AclRevision, 0xC03FAu, v2)
				&& (!ppDacl || AddAce(v3, v3->AclRevision, 0xFFFFFFFF, &ppDacl[1], ppDacl->AclSize - 8))))
		{
			SecurityInfo = SetSecurityInfo(CurrentProcess, SE_KERNEL_OBJECT, 0x80000004, 0i64, 0i64, v3, 0i64);
			v5 = SecurityInfo <= 0;
			if (!SecurityInfo)
				goto LABEL_21;
		}
		else
		{
			SecurityInfo = GetLastError();
			v5 = SecurityInfo <= 0;
		}
	}
	if (v5)
		v0 = SecurityInfo;
	else
		v0 = (unsigned __int16)SecurityInfo | 0x80070000;
LABEL_21:
	LocalFree(hMem);
	LocalFree(v2);
	LocalFree(v3);
	return v0;
}

