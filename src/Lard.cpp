#include "Debug.hpp"
#include "glue.h"
#include "Lard.hpp"

Lard::Lard()
{
    SetupGitDirectory();
    m_gitdir = GetGitDir();
    DBGPRINT( "Git dir: " << m_gitdir );
    m_objdir = m_gitdir + "/fat/objects";
    DBGPRINT( "Obj dir: " << m_objdir );
}

Lard::~Lard()
{
}
